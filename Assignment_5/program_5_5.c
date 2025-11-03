/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDifferFactor
//  Description :   Greatest in 3 numbers   
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayDifferFactor(int iNo1,int iNo2, int iNo3)                
{
    if(iNo1 < iNo2 && iNo3 < iNo2)
    {
        printf("%d is Greatest in 3", iNo2);
    }
    else if(iNo2 < iNo1 && iNo3 < iNo1)
    {
        printf("%d is greastest in 3 ", iNo1);
    }
    else
    {
        printf("%d is greatest in 3", iNo3);
    }
}   // End of DisplayDifferFactor

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter the first number :");
    scanf("%d",&iValue1);
    printf("Enter the second number :");
    scanf("%d",&iValue2);
    printf("Enter the third number :");
    scanf("%d",&iValue3);

    DisplayDifferFactor(iValue1,iValue2,iValue3);  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 16 95 45           Output : 95 is greatest in 3
//  Input : 68 65 -89          Output : 68 is greatest in 3
//
//
/////////////////////////////////////////////////////////////////   