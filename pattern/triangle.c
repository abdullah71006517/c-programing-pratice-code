#include<stdio.h>
int main (){

int row ;
printf(" \n enter row  ");
scanf(" %d",&row);
for (int i=0; i<=row ;i++){

    for(int j= 0 ; j<=i;j++){
            if (j==0|| j==i || i==row){
    printf(" *");}
        else  printf("%d ",j);

    }
        printf("\n ");
}


    return 0;




}









