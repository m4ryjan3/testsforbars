#include <stdio.h>
#include <assert.h>

int buying_buns(int a, int b, int n) {
    if (a < 0 || b < 0 || n < 0) {
        return -1;
    }
    int ans = ((a * 100 + b) * n) % 100;
    return ans;
}

int main(void) {
    assert(buying_buns(10, 1, 3) == 3);
    assert(buying_buns(15, 50, 5) == 50);
    assert(buying_buns(-1, 21, 3) == -1);

    printf("tests passed!!!!!!! congrats");
    return 0;
}