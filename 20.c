#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *ptr,char ch)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if((*ptr==ch))
        {
            return true;
        }
        ptr++;
    }
    return false;
}

int main()
{
    char Arr[100];
    char cValue='\0';

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search : \n");
    scanf(" %c",&cValue);

    bool bRet=ChkOccurance(Arr,cValue);

    if(bRet==true)
    {
        printf("character is present in string");
    }
    else
    {
        printf("character is not present in string");
    }

    return 0;
}