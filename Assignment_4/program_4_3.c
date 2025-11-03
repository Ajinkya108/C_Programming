/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNonFactor
//  Description :   Print all Non factors   
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayNonFactor(int iNo)                
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
            if(iNo % iCnt != 0)
            {
                printf("%d\t",iCnt);
            }
    }
}   // End of DisplayNonFactor

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

    DisplayNonFactor(iValue1);  // Method Call

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