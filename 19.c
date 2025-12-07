#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if((*ptr=='l') )
        {
            return true;
            break;
        }
        ptr++;
    }
    return false;
}

int main()
{
    char Arr[100];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    bool bRet=ChkOccurance(Arr);

    if(bRet==true)
    {
        printf("l is present in string");
    }
    else
    {
        printf("l is not present in string");
    }

    return 0;
}