#include<stdio.h>
int main (){
int a[5]={ 5,10,10,5,45};
printf(" before :");
for(int i=0;i<5;i++){
    printf("%d   ",a[i]);
}
for(int k=0;k<5;k++){

for(int i=k+1;i<5;i++){
    if(a[k]==a[i])
        a[i]=0;

}
}
printf("\n after : ");
for(int i=0;i<5;i++){
    printf("%d   ",a[i]);


}


return 0;
}
