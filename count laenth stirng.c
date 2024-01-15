#include<stdio.h>
int main (){

    char string[100];

    printf("Enter string: ");
    scanf("%s", string);
printf("  Individual characters: ");

    for (int j = 0; string[j] != '\0'; j++) {
      printf("   %c  ,",string[j]);
    }





return 0;
}
