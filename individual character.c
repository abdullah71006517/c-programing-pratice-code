#include<stdio.h>
#include<string.h>
int  main (){
char a[100];
printf(" enter your string : ");
scanf("%s",a);
printf(" individual character : ");
for(int i=0;i<strlen(a);i++){
    printf("%c  ",a[i]);

}






return 0;
}
