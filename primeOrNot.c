#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long number;
    long double to;
    unsigned long long i;
    printf("Enter a number to check if is prime: \n");
    scanf("%lld", &number);
    to = sqrt(number) + 1;
    if(number == 2)
    {
        printf("The number 2 is prime");
        return 0;
    }
    if(number % 2 == 0)
    {
        printf("The number %lld is not prime", number);
            return 0;
    }
    for(i = 3; i < to; i+=2)
    {
        if(number % i == 0)
        {
            printf("The number %lld is not prime", number);
            return 0;
        }
    }
    printf("The number %lld is prime", number);
    return 0;
}
