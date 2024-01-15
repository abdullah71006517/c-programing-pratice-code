#include<stdio.h>
  void arriyprint ( char a[]);
int main (){
    char a[100];
    printf(" enter your string : ");
   scanf("%s",a);
   arriyprint(a);
return 0;
}
void arriyprint (char a[]){
    int count =0;
printf(" \n before  individual chracter : ");
for(int i=0;a[i]!='\0';i++){
       count++;
       printf("%c ",a[i]);

}
printf(" \n totla size of arriy  :%d",count );
printf(" \n after reviers : ");
for(int i=count; i>=0;i--){

       printf("%c   ",a[i]);

}
}
