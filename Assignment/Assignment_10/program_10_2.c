/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : AreaRect
//  Description :   Calculate area of circle
//  Input :         float
//  output :        double
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

double AreaRect(float fNo1,float fNo2)
{
    float fCal = 0.0f;
    if(fNo1 <= 0)
    {
        fNo1 = -fNo1;
    }
    if(fNo2 <= 0)
    {
        fNo2 = -fNo2;
    }

    fCal = fNo1 * fNo2 ;

    return fCal;
}   // End of AreaRect

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fWidth = 0.0f, fLength = 0.0f ;
    double fAns = 0.0;
    printf("Enter Width of Rectangle:");
    scanf("%f",&fWidth);
    printf("Enter Length of Rectangle:");
    scanf("%f",&fLength);

    fAns = AreaRect(fWidth,fLength);

    printf("Area of Rectangle is %f", fAns);
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