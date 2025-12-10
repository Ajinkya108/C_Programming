/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : FerToCeliu
//  Description :   Convert Km to Mtrs
//  Input :         float
//  output :        float
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

double FerToCeliu(float fNo)
{
    float fCal = 0.0f;
    if(fNo <= 0)
    {
        fNo = -fNo;
    }

    fCal = (((fNo - 32)*5)/9);

    return fCal;
}   // End of FerToCeliu

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fTemp = 0.0f;
    double dRes = 0.0f;
    printf("Enter the Fehernhei to converted in Celsius:");
    scanf("%f",&fTemp);

    dRes = FerToCeliu(fTemp);
    
    printf("%f Fehrenheit Converted in %f Celsius",fTemp,dRes);
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