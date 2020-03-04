#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, LCM, z, n, m, p;
    printf("This program finds the lowest common multiple between two integers.\n");
    printf("\nPlease enter an integer: ");
    scanf("%d", &x);
    printf("Please enter another integer: ");
    scanf("%d", &y);
    //printf("The digits you entered are %d and %d", x, y);

if (x<y) //Testing for if the first integer entered is smaller than the second
{
    LCM=x*1;

    for (z=1; LCM<y;)
        {
            LCM=x*z;
            z=z+1;
        }
    z=z-1;
    for (p=1; z<2000000000;) //Loop that tests if a number is divisbile by x and y with no remainder
    {
        LCM=x*z;
        n=LCM%y;
        m=LCM%x;
        z=z+1;
        if (n==0 && m==0)
        {
        printf("\nThe lowest common multiple between %d and %d is %d.", x, y, LCM);
        printf("\n");
        return 0;
        }
    }

    return 0;
    }


else if (x>y)
{
    LCM=y*1;

    for (z=1; LCM<x;)
    {
        LCM=y*z;
        z=z+1;
    }
    z=z-1;
    for (p=1; z<2000000000;)
    {
        LCM=y*z;
        n=LCM%y;
        m=LCM%x;
        z=z+1;
        if (n==0 && m==0)
        {
        printf("\nThe lowest common multiple between %d and %d is %d.", x, y, LCM);
        printf("\n");
        return 0;
        }
    }
    return 0;

    }
else
{
    printf("\nThe lowest common multiple between %d and %d is %d.", x, y, x);
    return 0;
}
return 0;
}
