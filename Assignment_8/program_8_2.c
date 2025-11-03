/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : DigitAlpha
//  Description :   Single digit to Word
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DigitAlpha(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    switch(iNo)
    {
        case 1 :
                printf("One");
                break;
        case 2 :
                printf("Two");
                break;
        case 3 :
                printf("Three");
                break;
        case 4 :
                printf("Four");
                break;
        case 5 :
                printf("Five");
                break;
        case 6 :
                printf("Six");
                break;
        case 7 :
                printf("Seven");
                break;
        case 8 :
                printf("Eight");
                break;
        case 9 :
                printf("None");
                break;
        default :
                printf("Invalid Number");
                break;
    }

}   // End of DigitAlpha

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DigitAlpha(iValue);

}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//
//
//
//
/////////////////////////////////////////////////////////////////   