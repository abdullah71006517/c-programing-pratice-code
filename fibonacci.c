#include <stdio.h>

int main() {
    int n;// Write C code here

   printf("enter n th number : ");
scanf("%d",&n);
int arry[n];
arry[0]=0;
arry[1]=1;
printf("fibonacci number : 0 ");
for(int i=2;i<=n;i++){

    arry[i]=arry[i-2]+arry[i-1];
    printf(" %d ",arry[i]);



}

    return 0;
}
