#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int count = 0;
    float sum = 0;

    // Input
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    printf("Input the third number: ");
    scanf("%d", &num3);
    printf("Input the fourth number: ");
    scanf("%d", &num4);


    if (num1 % 2 != 0) {
        sum += num1;
        count++;
    }
    if (num2 % 2 != 0) {
        sum += num2;
        count++;
    }
    if (num3 % 2 != 0) {
        sum += num3;
        count++;
    }
    if (num4 % 2 != 0) {
        sum += num4;
        count++;
    }


    if (count > 0) {
        float average = sum / count;
        printf("The average of odd values: %.2f\n", average);
    } else {
        printf("No odd values to average.\n");
    }

    return 0;
}
