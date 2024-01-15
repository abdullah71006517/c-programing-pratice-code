#include<stdio.h>
#include<string.h>

int main () {
char a[100];
int s;
printf(" enter your string : ");
scanf("%s",a);
printf(" \n shift:");
scanf("%d",&s);
printf("\n output: ");
for(int i=0;i<strlen(a);i++){

    printf("%c",a[i]+s);

}
return 0;

}
