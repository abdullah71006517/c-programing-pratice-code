#include <stdio.h>

int main() {
    int size;
int sum=0;
    // Input the number of students
    scanf("%d", &size);

    int marks[size];

    // Input the marks for each student
    for (int i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;

    // Input the gender
    scanf(" %c", &gender);

    for (int j=(gender == 'b' ? 0 : 1);j<size;j=j+2){
                sum=sum+marks[j];}
 printf("%d",sum);
    return 0;
}
