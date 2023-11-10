#include <stdio.h>

#define MAX 50
long long int memo[MAX];

long long int fib(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else if (memo[num] != -1)
    {
        return memo[num];
    }
    else
    {
        memo[num] = fib(num - 1) + fib(num - 2);
        return memo[num];
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    
    for (int i = 0; i < MAX; i++)
    {
        memo[i] = -1;
    }

    long long int fab;
    fab = fib(a);

    printf(" %lld\n", fab);

    return 0;
}
