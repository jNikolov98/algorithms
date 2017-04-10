#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int num;
    int five;
    int two;
    five = 0;
    two = 0;
    printf("Enter the count of numbers you will enter \n");
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if(num == 0)
        {
            printf("0 times something is 0");
            return 0;
        }
        while(num % 2 ==0)
        {
            num = num / 2;
            two++;
        }
        while(num % 5 == 0)
        {
            num = num / 5;
            five++;
        }

    }

    if(five == 0 || two == 0)
    {
        printf("There will be no zeros");
    }else
    {
        (five > two)? printf("%d zeros", two): printf("%d zeros", five);
    }
    return 0;
}
