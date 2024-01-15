#include<stdio.h>
#include<string.h>
int main (){
char a[100], b[100];
printf(" enter your string : ");
 scanf("%s",a);
printf(" enter yours sub- string : ");
 scanf("%s",b);
for(int i=0;i<strlen(a) ;i++)
{
    int j=0;
    for(j=0;j<strlen(b);j++){
        if(a[j+i]!=b[j]){
        break;}
    }
    if(j==strlen(b)){
        printf(" it is sub stirng ");
        return 0;
    }

    }

    printf(" it is not substring ");
    return 0;}



