#include<stdio.h>
int main (){

int arry[6]= {2,12,45,78,12,45,};
int c , founded = 0;
printf("\n  enter  finding element  ");
scanf("%d",&c);

for(int i =0;i<6;i++){
    if (c==arry[i]){
        ++founded;
    }
}
    if(founded)
    printf("\n  yes , %d founded  ", c);

else printf("\n not founded %d",c );


return 0;
}
