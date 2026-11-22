
#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i <= n / 2; i++)//half print korar jnno
    {
        for (j = 0; j < n / 2 - i; j++)//space print korar jnno
        {
            printf("_");
        }
        for (j = 0; j < 2 * i + 1; j++)//bijor maan print korar jnno
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n / 2 - 1; i >= 0; i--)//ulta kore print korar jnno
    {
        for (j = 0; j < n / 2 - i; j++)
        {
            printf("_");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

   

return 0;
}