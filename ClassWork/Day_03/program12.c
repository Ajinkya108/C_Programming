/*
    START
        Accept the numebr and store as a no
        Divide by 2
        If the reminder is 0
            then display as Even
        otherwise
            Display as ODD
    STOP
*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}