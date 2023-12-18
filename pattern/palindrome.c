#include <stdio.h>
#include <string.h>
int main()
{
    int c;
    char b[10 ] ;
    scanf("%s",b);
    int length = strlen(b);
    char a[length ];
    for (int i = length  - 1,j=0;  i>=0; i--,j++)
    {
        a[j]= b[i];
        if(a[j]==b[j])
        {c++;
        }
    }
    if (c==length)
    {printf(" \n   yes , it is palindrome ");
    }
    else printf(" \n  no , it is not palindrome ");
    return 0;
}
