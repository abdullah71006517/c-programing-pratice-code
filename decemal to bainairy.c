#include<stdio.h>

void binary(int a){
    int c[10];
    int i = 0;
    while (a != 0){
        c[i++] = a % 2;
        a /= 2;
    }

    printf("\nBinary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", c[j]);
    }
    printf("\n");
}

int main() {
    int a;
    printf("Enter decimal number: ");
    scanf("%d", &a);

    binary(a);

    return 0;
}

