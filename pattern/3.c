/*
**********
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row=n;row>=1;row--){

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
