#include<stdio.h>
int main ()
{
    int sum ;
    int n ;
    printf(" enter N : ");
    scanf (" %d",&n);
    for (int i=1; i<=n; i++)
    {
        printf("(");
        for (int j=1 ; j<=i; j++)
        {
            sum =sum+j;
            if (j==i)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d+",j);
            }
        }
        printf(")");
        if (i==n)
        {
            printf(" =");
        }
        else
        {
            printf(" + ");
        }
    }

    printf("\n  sum of series %d", sum );


    return 0;
}
