#include <stdio.h>

int main() {
    int size, c = 0, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
  printf("\n enter your array %d :",size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);

        if (a[i] %2!= 0) {
            sum += a[i];
            c++;
        }
    }
        float average = (float)sum / c;
        printf("Average: %.2f\n", average);
    return 0;
}
