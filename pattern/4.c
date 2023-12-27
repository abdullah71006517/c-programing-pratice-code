/*
*
**
* *
*  *
*****

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){

        for(int colam=1;colam<=row;colam++){
            if(row==n||colam==1|| colam==row)
        printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
