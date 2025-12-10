/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   Change the case of given char  
//  Input :         Char
//  output :        Char
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayConvert(char cChar)                   
{
    if(isalpha(cChar))
    {
        if(islower(cChar))
        {
            cChar = toupper(cChar);
            printf("Upper case of char is : %c",cChar);
        }
        else
        {
            cChar = tolower(cChar);
            printf("Lower case of char is %c",cChar);
        }
    }
    else
    {
        printf("the %c is not an alphabaet. Please try again",cChar);
    }

}   // End of DisplayConvert

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char cValue = 0;            // user input

    printf("Enter the Character :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input : a   output : A
//  Input : A   output : a
//
/////////////////////////////////////////////////////////////////   