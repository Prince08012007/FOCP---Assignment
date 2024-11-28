#include <stdio.h>
#include <math.h>

// hollow triangle 101 pattern
int main()
{
    int n;
    int s = 0, i, j;
    printf("enter number of lines(odd): ");
    scanf("%d", &n);
    s = (2 * n) - 2;
    for (i = 1; i <= n; i++)
    {
        int x = 0;
        for (j = i; j > 0; j--)
        {
            printf("%d", x);
            if (x == 0)
            {
                x = 1;
            }
            else
            {
                x = 0;
            }
        }
        for (int z = s; z > 0; z--)
        {
            printf(" ");
        }
        s = s - 2;
        int f = 0;
        for (int j = i; j > 0; j--)
        {
            printf("%d", f);
            if (f == 0)
            {
                f = 1;
            }
            else
            {
                f = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
