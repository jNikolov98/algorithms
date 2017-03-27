#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long number;
    printf("Enter n to see the prime numbers between 1 and n \n");
    scanf("%ld", &number);
    int primes[number-2];
    unsigned long i;
    for(i = 0; i <= number-2; i++)
    {
        primes[i] = 0;
    }
    unsigned long skip;
    unsigned long si;
    for(i = 0; i <= number-2; i++)
    {
        if(primes[i] == 0)
        {
            skip = i+2;
            si = i + skip;
            for(si; si<= number-2; si+=skip)
            {
                primes[si] = 1;
            }
        }
    }
    for(i = 0; i <= number-2; i++)
    {
        if(primes[i] == 0)
        {
            printf("%ld \n", i + 2);
        }
    }
    return 0;
}
