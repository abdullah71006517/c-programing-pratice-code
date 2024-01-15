#include <stdio.h>

int mod(int x, int y);

int main() {
    int a[6] = {10, 15, 20, 25, 45};

    int team = a[0];

    for (int i = 1; i < 5; i++) {
        team = mod(team, a[i]);
    }
printf(" total mod %d",team);
    return 0;
}

int mod(int x, int y) {
    int temp = y;
    y = x % y;
    x = temp;

    return y;}
