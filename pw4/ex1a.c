#include <stdio.h>
// iterative approach
int main()
{
    int m, n, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    for (i = 1; i <= m && i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }

    printf("G.C.D of %d and %d is %d\n", m, n, gcd);
    return 0;
}
