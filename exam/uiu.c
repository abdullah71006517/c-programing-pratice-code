#include<stdio.h>

int main() {
    float time, distance, tk;
    int transportSelection;

    printf("Menu:\n");
    printf("Enter 1 to choose Car\n");
    printf("Enter 2 to choose Train\n");
    printf("Enter 3 to choose Bicycle\n");
    printf("Enter 4 to choose Bus\n");
    printf("Enter 5 to choose Walk\n");
    printf("Enter your choice: ");

    scanf("%d", &transportSelection);
    printf("\nTravel hours: ");
    scanf("%f", &time);

    switch (transportSelection) {
        case 1:
            distance = time * 60;
            tk = distance * 50 / 60;
            printf("Travel hours: %.2f\n", time);
            printf("Total distance: %.2f miles\n", distance);
            printf("Total cost: %.2f Taka\n", tk);
            break;

        case 2:
            distance = time * 80;
            tk = distance * 40 / 80;
            printf("Travel hours: %.2f\n", time);
            printf("Total distance: %.2f miles\n", distance);
            printf("Total cost: %.2f Taka\n", tk);
            break;

        case 3:
            distance = time * 15;
            tk = 0;
            printf("Travel hours: %.2f\n", time);
            printf("Total distance: %.2f miles\n", distance);
            printf("Total cost: %.2f Taka\n", tk);
            break;

        case 4:
            distance = time * 30;
            tk = distance * 20 / 30;
            printf("Travel hours: %.2f\n", time);
            printf("Total distance: %.2f miles\n", distance);
            printf("Total cost: %.2f Taka\n", tk);
            break;

        case 5:
            distance = time * 3;
            tk = 0;
            printf("Travel hours: %.2f\n", time);
            printf("Total distance: %.2f miles\n", distance);
            printf("Total cost: %.2f Taka\n", tk);
            break;

        default:
            printf("\nInvalid selection\n");
    }

    return 0;
}
