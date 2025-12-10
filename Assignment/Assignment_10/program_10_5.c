/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : FeetToMeter
//  Description :   Convert SqFeet to SqMtrs
//  Input :         float
//  output :        float
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

double FeetToMeter(float fNo)
{
    float fCal = 0.0f;
    if(fNo <= 0)
    {
        fNo = -fNo;
    }

    fCal = fNo * 0.0929;

    return fCal;
}   // End of FeetToMeter

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fSqFeet = 0.0f;
    double dRes = 0.0f;
    printf("Enter the SqFeet to converted in SqMtrs:");
    scanf("%f",&fSqFeet);

    dRes = FeetToMeter(fSqFeet);
    
    printf("%f SqFeet Converted in %f SqMtrs",fSqFeet,dRes);
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