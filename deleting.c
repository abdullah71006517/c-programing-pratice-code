#include<stdio.h>
#include<math.h>N
int main() {
    int position ;
    int arr[6] = {2, 12, 45, 78, 12, 78};
int a=
printf(" %d     ",a);
    printf("Before deleting:\n");

for(int i = 0; i < 6; ++i)
    printf("%d ", arr[i]);
  scanf(" %d", &position);


  for (int i=position-1; i<6;i++){
    arr[i]=arr[i+1];


  }
  for(int i = 0; i < 70; ++i)
    printf("%d ", arr[i]);








    return 0;
}
