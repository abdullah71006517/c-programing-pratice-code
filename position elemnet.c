#include<stdio.h>
int main () {
   int  a[5]={5,10,15,20,25};
  int position ,element;
  printf(" \n enter your  postion : ");
  scanf("%d",&position );
  printf(" \n enter your element :");
   scanf("%d",&element);
   a[position ]=element ;
   printf("\n your arriry after work : ");
   for(int i=0;i<5;i++){
       printf("%d  ",a[i]);


   }

}
