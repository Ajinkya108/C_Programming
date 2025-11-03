/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : AreaCircle
//  Description :   Calculate area of circle
//  Input :         float
//  output :        double
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

double AreaCircle(float fNo)
{
    float pi = 3.14;
    float fCal = 0.0f;
    if(fNo <= 0)
    {
        fNo = -fNo;
    }
    
    fCal = pi * fNo * fNo ;
    return fCal;
}   // End of AreaCircle

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fRedius = 0.0f;
    double fAns = 0.0;
    printf("Enter Redius of Circle:");
    scanf("%f",&fRedius);

    fAns = AreaCircle(fRedius);

    printf("Area of Circle is %f", fAns);
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