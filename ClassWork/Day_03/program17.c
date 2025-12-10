#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}
int main()
{
    int iValue = 0;
    bool bRat = false;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    bRat = CheckEvenOdd(iValue);
    if(bRat == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}