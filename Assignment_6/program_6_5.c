/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CalPercentage
//  Description :   Greatest in 3 numbers   
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

float CalPercentage(float iNo1,float iNo2)                
{
    float fRes = 0.0f;
    if(iNo1 == 0)
    {
        printf("Enter non zero number");
    }
    if(iNo2 == 0)
    {
        printf("Enter non zero number");
    }

    if(iNo1 > iNo2)
    {
        fRes = (iNo2 / iNo1) * 100;
    }
     
    return fRes;

}   // End of CalPercentage

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float iValue1 = 0, iValue2 = 0;
    float fCal = 0.0f;
    printf("Enter the Total marks :");
    scanf("%f",&iValue1);
    printf("Enter the obtained marks :");
    scanf("%f",&iValue2);

    fCal = CalPercentage(iValue1,iValue2);  // Method Call

    printf("percentage of  given mubers is %f", fCal);

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