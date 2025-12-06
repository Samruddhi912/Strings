#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char value)
{
    bool bFlag=true;
    if((value>='0') && (value<='9'))
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
        printf("Character is digit.");
    }
    else
    {
        printf("Character is not digit.");
    }

    return 0;
}