#include<stdio.h>
int main () {
int mark[5]={55,66,22,58,65};


printf(" after change ");
for(int j=0;j<5;j++){
    printf("%d  ",mark[j]);
}
int j;


printf(" \n enter your changing  element  position which you want ");
scanf("%d",&j);
printf(" \n enter element valu ");
scanf("%d", &mark[j-1]);
printf("\n  before change");
for(int i =0;i<5;i++){

    printf("  %d",mark[i]);
}
return 0;


}
