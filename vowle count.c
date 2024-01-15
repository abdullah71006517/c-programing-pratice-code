#include<stdio.h>

int main () {
    char a[100];
    printf("Enter your string: ");
    scanf("%s", a);

    int count = 0;

    for(int i = 0; a[i] != '\0'; i++) {

        if(a[i] != 'a'&& a[i] != 'e'&& a[i] != 'i'&& a[i] != 'o'&& a[i] != 'u'&&
           a[i] != 'A'&& a[i] != 'E'&& a[i] != 'I'&& a[i] != 'O'&& a[i] != 'U') {
            count++;

        }
    }

    printf("Total consonet : %d\n", count);

    return 0;
}
