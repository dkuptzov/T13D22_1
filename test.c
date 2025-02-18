#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// int main()
// {
//     const double M_PI = 3.1415926536;
//     long double V, P = 21500.0;
//     double R, m;
//     if (scanf("%lf", &R) == 1)
//     {
//         V = (4.0 / 3.0) * M_PI * R * R * R;
//         m = P * V;
//         printf("%.0lf", m);
//     }
        // else printf("n/a");
        // return 0;
// }

// int main()
// {
//     double r = 57.29;
//     double temp;
//     if (scanf("%lf", &temp) == 1)
//     {
//         printf("%.0lf", temp * r);
//     }
//     else printf("n/a");
//     return 0;
// }

// int main()
// {
//     int stop = 0;
//     char str[100];
//     scanf("%s", str);
//     if (str[0] == '-') stop = 1;
//     for (int i = strlen(str); i >= stop; i--)
//     {
//         if (str[0] == '-')
//         {
//             printf("-");
//             str[0] = '+';
//         }
//         printf("%c", str[i]);
//     }
        // return 0;
// }

// int main()
// {
//     int A, B, C;
//     if (scanf("%d %d %d", &A, &B, &C) == 3)
//     {
//         ((A > C && C > B) || (B > C && C > A)) ? printf("1") : printf("0");
//     }
//     return 0;
// }

// int main()
// {
//     int x, y, z;
//     if (scanf("%d %d %d", &x, &y, &z) == 3)
//     {
//         if (x && (y || z)) printf("1");
//         else printf("0");
//     }
//     return 0;
// }

/*
int binom(int n, int i);
int fact(int n);

int main()
{
    int n;
    if (scanf("%d", &n) == 1 && n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", binom(n, i));
        }
    }
    printf("1");
}

int binom(int n, int i)
{
    return fact(n) / (fact(i) * fact(n - i));
}

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
    */

// int main()
// {
//     int x, max = 0;
//     while(scanf("%d", &x) == 1 && x != -1)
//     {
//         if (x > max)
//         {
//             max = x;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// int main()
// {
//     int x, max = 0;
//     if (scanf("%d", &x) == 1 && x >= 0)
//     {
//         if (x < 10)
//         {
//             printf("%d", x);
//         }
//         else
//         {
//             int z = x % 10;
//             while (x >= 10)
//             {
//                 if (z > max) max = z;
//                 x /= 10;
//                 z %= 10;
//             }
//             if (x > max) max = x;
//             printf("%d", max);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int x, res = 0;
//     if (scanf("%d", &x) == 1)
//     {
//         if (x < 0) x *= -1;
//         while (x >= 10)
//         {
//             int z = x % 10;
//             if (z % 2 != 0)
//             {
//                 if (res == 0) res = 1;
//                 res *= z;
//             }
//             x /= 10;
//         }
//         if (x % 2 != 0)
//         {
//             if (res == 0) res = 1;
//             res *= x;
//         }
//     }
//     printf("%d", res);
// }