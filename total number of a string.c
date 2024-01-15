#include<string.h>
#include<stdio.h>
int main (){
char a[100];
printf(" enter your string : ");
scanf("%s",a);
int count =0;
for(int i=0;i<strlen(a);i++){
if(a[i]>='0' && '9' >= a[i]){
count ++;
}
}
printf(" \n total number of string : %d",count);
return 0;

}

