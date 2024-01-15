#include<stdio.h>
int main (){
int a[7]={5,10,15,1,35,25,15};
  int max=0;
for(int i= 0;i<7;i++){
if ( a[i]>max)
    max=a[i];
}
  printf(" max number :%d",max);
int min=a[0];
for(int i= 0;i<7;i++){
if ( a[i]<min)
    min=a[i];
}
  printf(" min  number :%d",min);

return 0;
}
