#include<stdio.h>
#include<string.h>
int main (){
 char a [100];
 printf("enter your stirng ");
 scanf("%s",a);
    for (int i=strlen(a)-1 , j=0; j<strlen(a)/2; i--,j++){
           if(a[i] != a[j] ) {
            printf(" \n not palandom");
            return 0;
           }
    }
     printf(" \n it is palandom ");
return 0;

}
