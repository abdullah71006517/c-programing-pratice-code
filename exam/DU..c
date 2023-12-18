#include<stdio.h>
int main () {

float item_prise,total_price,discout;
int cout ;
char a; // for known discount
printf( "How many items do you want to purchase?");
scanf(" %d",&cout);
for(int i  =1;i<=cout;i++){
    printf("Enter the price of item %d= ",i);
    scanf("%f",&item_prise);
    total_price+=item_prise;

}
printf("\n do have any discount ?");
scanf(" %c",&a);

if(a=='Y' || a=='y'){
    printf("Entered discount percentage : ");
    scanf("%f",&discout);
    discout=(total_price*discout)/100;
    total_price= total_price -discout;
}
printf(" \n invoice");
    printf(" \n total Bill: $%.2f",total_price);
    if(total_price<5){
        printf(" \n congratulations! You are our SILVER customer ");
    }
      else if  (total_price>=5&& total_price<20){
        printf(" \n congratulations! You are our GOLD customer ");}
    else if   (total_price>=20){
        printf(" \n congratulations! You are our PLATINUM customer ");
    }
return 0 ;
}
