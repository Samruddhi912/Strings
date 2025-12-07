#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if((*ptr=='w') || (*ptr=='W'))
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

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    bool bRet=ChkOccurance(Arr);

    if(bRet==true)
    {
        printf("w is present in string");
    }
    else
    {
        printf("w is not present in string");
    }

    


    return 0;
}