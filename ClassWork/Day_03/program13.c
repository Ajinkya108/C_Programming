#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRat = false;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    bRat = CheckEvenOdd(iValue);

    printf("Result is : %d\n",bRat);
    return 0;
}