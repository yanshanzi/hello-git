#include <stdio.h>

int main(void) {
    int s = 0, i;
    for (i = 1; i <= 6; i++) {
        if (i % 2 == 0) continue;
        s += i;
    }
    printf("%d %d", s, i);
    return 0;
}
