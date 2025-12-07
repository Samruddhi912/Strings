#include<stdio.h>

int ChkSpaces(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if(*ptr== ' ')
        {
            iCnt++;
        }
        ptr++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    int iRet=ChkSpaces(Arr);

    printf("Number of spaces  in string are: %d\n",iRet);


    return 0;
}