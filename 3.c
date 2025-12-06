#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char value)
{
    bool bFlag=true;
    if((value>='a') && (value<='z'))
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
    
    bool bRet=ChkSmall(ch);
    if(bRet==true)
    {
        printf("Character is small.");
    }
    else
    {
        printf("Character is not small.");
    }

    return 0;
}