
#include<stdio.h>
int main (){
    int n ;
    printf(" enter the n ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for (int colam=1;colam<=n;colam++){
            if(colam==row|| colam==n-row+1)
            printf("*");
            else printf(" ");

        }
        printf("\n");
    }
    return 0;
}
