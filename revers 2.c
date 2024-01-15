#include <stdio.h>

int main() {
    char a[100];
    printf("Enter your string: ");
    scanf("%s", a);

    int c = 0;
    while (a[c] != '\0') {
        c++;
    }
printf(" \n ater revers : ");
for(int i=c-1;i>=0;i--)
     printf("%C",a[i]);
    return 0;
}
