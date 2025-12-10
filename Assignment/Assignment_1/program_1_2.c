/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayMarvellous
//  Description :   It is used to perform printing Marvellous         
//  Input :         int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayMarvellous(int iNo1)                 // Input
{
    int iCnt = 0;
    if(iNo1 < 0)                                // Updator
    {
        iNo1 = -iNo1;
    }
    
    for(iCnt = 1 ; iCnt <= iNo1 ; iCnt++ )
    {
        printf("Marvellous...\n");              // business logic
    }
}   // End of DisplayMarvellous

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                            // Accept the input
    iValue1 = 5;
    //printf("Enter the Frequency to print : ");
    //scanf("%d",&iValue1);

    DisplayMarvellous(iValue1);                  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input = 5
//  Output 
//         Marvellous...
//         Marvellous...
//         Marvellous...
//         Marvellous...
//         Marvellous...
//
/////////////////////////////////////////////////////////////////   