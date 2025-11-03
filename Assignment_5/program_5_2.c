/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   Check Max in two numbers 
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void FindMax(int iNo1, int iNo2)                
{   
    if(iNo1 == iNo2)
    {
        printf("Numbers are equal");
    }
    else if(iNo1 > iNo2)
    {
        printf("%d is greater thean %d",iNo1,iNo2);
    }
    else
    {
        printf("%d is greater thean %d",iNo2,iNo1);
    }
    
}   // End of FindMax

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the First number :");
    scanf("%d",&iValue1);
    printf("Enter the Second number :");
    scanf("%d",&iValue2);

    FindMax(iValue1,iValue2);  // Method Call
    
    
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 19     94          Output : 94 is greater than 19
//  Input1 : 652    56          Output : 652 is greater than 56
//
//
/////////////////////////////////////////////////////////////////   