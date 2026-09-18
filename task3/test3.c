#include <stdio.h>
#include <assert.h>

int km(int m) {
    if (m < 0) {
        return -1;
    }
    return m / 1000;
}

int main(void) {
    assert(km(1000) == 1);
    assert(km(25500) == 25);
    assert(km(-321312) == -1);

    printf("tests passed, clap-clap");
    return 0;
}