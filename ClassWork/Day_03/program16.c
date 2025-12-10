////////////////////////////////////////////////////////
//  
//  Required header files
//  
////////////////////////////////////////////////////////

#include<stdio.h>               //For Input Output
#include<stdbool.h>             // For boolean/bool datatpye

////////////////////////////////////////////////////////
//
//  Funcrtion Name  :   CheckEvenOdd
//  Description :       It is used to check Even or odd
//  Input   :           Integer
//  Output  :           Booleam
//  Author  :           Ajinkya Rajendra Ghag
//  Date    :           10-10-2025
//
////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    
    if(iRem == 0)
    {   return true;  }
    else
    {   return false;   }

}

////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRat = false;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    bRat = CheckEvenOdd(iValue);
    if(bRat == true)
    {   printf("%d is Even number\n",iValue);   }
    else
    {   printf("%d is Odd number\n",iValue);    }
    return 0;
}

////////////////////////////////////////////////////////
//
//  Test cases
//
////////////////////////////////////////////////////////