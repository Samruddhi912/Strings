#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char value)
{
    bool bFlag=true;
    if((value>='A') && (value<='Z'))
    {
        return bFlag; 
    }
    else{
        bFlag=false;
        return bFlag;
    }
}

int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    
    bool bRet=ChkCapital(ch);
    if(bRet==true)
    {
        printf("Character is capital.");
    }
    else
    {
        printf("Character is not capital.");
    }

    return 0;
}