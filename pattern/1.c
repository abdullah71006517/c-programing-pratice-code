/*
*
**
***
****
*****
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){

        for(int colam=1;colam<=row;colam++){
        printf("*");}
        printf("\n");
    }

    return 0;
}
