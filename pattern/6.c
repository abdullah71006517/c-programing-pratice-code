/*
     *
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int i=1;i<=n-row;++i){
        printf(" ");}
        for(int colam=1;colam<=2*row-1;colam++){
                if(colam==1|| colam==2*row-1|| row==n)
          printf("*");
        else printf(" ");
        }
        printf("\n");
    }

    return 0;
}

