/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   Check it is vowel or not  
//  Input :         Char
//  output :        Char
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckVowel(char cChar)                
{
    bool bVal = false;
    if(isalpha(cChar))
    {
        if(cChar == 'a' || cChar == 'A' || cChar == 'e' || cChar == 'E' ||cChar == 'i' || cChar == 'I' ||cChar == 'o' || cChar == 'O' ||cChar == 'u' || cChar == 'U')
        {
            bVal = true;
            return bVal;
        }
        else
        {
            bVal = false;
            return bVal;
        }
    }
    else
    {
        printf("the %c is not an alphabaet. Please try again",cChar);
    }

}   // End of CheckVowel

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char cValue = 0;
    bool bRes = false;

    printf("Enter the Character :");
    scanf("%c",&cValue);

    bRes = CheckVowel(cValue);  // Method Call

    if(bRes == true)
    {
        printf("%c is a vowel", cValue);
    }
    else
    {
        printf("%c is not a vowel",cValue);
    }
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input : q           Output : q is NOT Vowel
//  Input : a           Output : a is Vowel
//
/////////////////////////////////////////////////////////////////   