#include <stdio.h>


int is_unique(const int a, const int bc, const int def, const int gh, const int i) {
    int used[10] = {0, 0 , 0, 0, 0 ,0 ,0,0,0,0};
    const int nums[] = {a, bc, def, gh, i};
    const int n = sizeof(nums) / sizeof(nums[0]);

    for (int k = 0; k < n; k++) {
        int value = nums[k];
        while (value > 0) {
            const int digit = value % 10;
            if (used[digit]) {
                return 0;
            }
            used[digit] = 1;
            value /= 10;
        }
    }
    return 1;
}

int main(void) {
    int count = 0;
    for (int a = 2; a <= 9; a++) {
        for (int bc = 100 / a; bc <= 99 ; bc++) {
            int def = a * bc;
            if (def <= 99) {
                continue;
            }
            for (int i = 2; i <= 9; i++) {
                const int gh = def / i;
                if (gh != bc && i != a && gh < 100 && def == gh * i) {
                    if (is_unique(a, bc, def, gh, i) == 1) {
                        printf("%d * %d =", a, bc);
                        printf(" %d = ", def);
                        printf("%d * %d \n", gh, i);
                        count++;
                    }
                }
            }

        }
    }
    printf("the number of solutions is %d", count);
    return 0;
}