#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int input;
    scanf("%d", &input);
    unsigned int primes[input];
    primes[0] = 2;
    unsigned int n = 3;
    unsigned int prIndex = 0;
    printf("%d \n", 2);
    while(n <= input)
    {
        if(checkPrime(n, prIndex, primes) == 1)
        {
            prIndex++;
            primes[prIndex] = n;
            printf("%d \n", n);
        }
        n+=2;
    }
    return 0;
}

int checkPrime(unsigned int n, unsigned int prIndex, unsigned int primes[])
{
    unsigned int i = 0;
    double rootN = sqrt(n);
    while(primes[i] <= rootN && i <= prIndex)
    {
        if(n % primes[i] == 0)
        {

            return 0;
        }
        i++;
    }
    return 1;
}
