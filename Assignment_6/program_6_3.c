/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Description :   Check Number are equal or not
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)                
{   
    if(iNo1 == iNo2)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
    
}   // End of CheckEqual

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRes = 0;
    printf("Enter the first number :");
    scanf("%d",&iValue1);
    printf("Enter the Second number :");
    scanf("%d",&iValue2);

    bRes = CheckEqual(iValue1, iValue2);  // Method Call
    
    if(bRes == true)
    {
        printf("%d and %d are Equal", iValue1,iValue2);
    }
    else
    {
        printf("%d and %d are not Equal", iValue1,iValue2);
    }
    return 0;
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