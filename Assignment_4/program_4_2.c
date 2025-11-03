/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactorDecreasing
//  Description :   Print factors in decending order  
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayFactorDecreasing(int iNo)                
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = (iNo/2);iCnt >= 1 ; iCnt--)
    {
            if(iNo % iCnt == 0)
            {
                printf("%d\t",iCnt);
            }
    }
}   // End of DisplayFactorDecreasing

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    
    printf("Enter the number :");
    scanf("%d",&iValue1);

    DisplayFactorDecreasing(iValue1);  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//  Time Complexity: O(N/2)
//  Testcases succesfully handaled by the application
//
//  Input : 6       Output : 6  3   2   1
//  Input : 10      Output : 10 5   2   1
//
/////////////////////////////////////////////////////////////////   