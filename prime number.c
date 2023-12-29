#include <stdio.h>

int main() {
      int prime =1;
   int number ;
   printf("enter your number ");
   scanf("%d",&number );
   if (number==1)
    prime=0;
  // printf("\n %d is not prime number ",number );

   else{

       for (int i=2;i<number;i++){
           if(number%i==0){
            prime=0;
           break;}

   }
   }
   if(prime==1)
   printf(" %d is a prime number",number);
   else printf("%d is not prime number ",number);

    return 0;
}
