#include<stdio.h>
int main () {

int a[6]={10,20,30,40,50,60};
int key;
printf("enter your element which  you want remove :") ;
scanf("%d",&key);
for(int i=0;i<6;++i){
    if(a[i]==key){
        for (int j=i;i<6-1;j++){
            a[j]=a[j+1];

        }
    }
}
    for(int i=0;i<6-1;i++){
    printf("%d  ",a[i]);


}

return 0;
}
