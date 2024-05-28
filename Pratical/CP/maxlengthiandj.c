#include <stdio.h>

int main()
{
    long int a, b, i, n, s, d, j, k, num;
    while (scanf("%ld %ld", &a, &b) == 2)
    {
        if (a > 0 && a < 1000000 && b > 0 && b < 1000000)
        {
            
            d = 0;
            if (a > b)
            {
                // j = b;
                // k = a;
                printf("enter the valid number or ascending number:");
                scanf("%d%d", &a, &b);
            }
            j = a;
            k = b;
            for (i = j; i <= k; i++)
            {
                n = i;
                s = 1;
                while (n != 1)
                {
                    if (n % 2 == 0)
                    {
                        n = n / 2;
                        s++;
                    }
                    else
                    {
                        n = 3 * n + 1;
                        s++;
                    }
                }
                if (d < s)
                {
                    num = i;
                    d = s;
                }
            }
            // printf("%ld %ld %ld %ld \n", a, b, d, num);
              printf("%ld %ld largest sequence %ld of a number %ld \n", a, b, d, num);
        }
    }
    return 0;
}

// 20 25
// 20 25 largest sequence 24 of  a number  is 25 
