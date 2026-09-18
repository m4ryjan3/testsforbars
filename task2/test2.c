#include <stdio.h>
#include <assert.h>

int bad_apple(int n, int k) {
    if ((k < 0 || k > 10000) || (n < 0 || n > 10000)) {
        return -1;
    }
    return k % n;
}

int main(void) {
    assert(bad_apple(2, 2) == 0);
    assert(bad_apple(10, 3) == 3);
    assert(bad_apple(-13, -32) == -1);

    printf("tests passed succesfully!");
    return 0;
}