
#include <stdio.h>

int main() {
    int a;


    printf("Enter a number  ");
    scanf("%d", &a);


    if (a % 6 !=0 && a % 7  != 0) {
        printf(" NOT is divisible by 6 and 7%d \n", a);
    } else {
        printf("divisible by 6 and 7.\n", a);
    }

    return 0;
}
