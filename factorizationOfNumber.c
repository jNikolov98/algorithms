#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, i, power;
    i = 2;
    scanf("%d", &number);

    while(number != 1)
    {
        power = 0;
        while(number % i == 0)
        {
            power++;
            number = number / i;
        }
        if(power != 0)
            printf("%d ^ %d \n", i, power);
        i++;
    }
}
