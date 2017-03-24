#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float sum = 0;
    int i = 0;
    printf("Find how many digits has the factorial of a number \n \n \n");
    printf("Enter integer number: \n");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        sum = sum + log10(i);
    }
    sum = floor(sum);
    sum += 1;
    printf("factorial of %d has %.0f digits",num, sum);
    return 0;
}
