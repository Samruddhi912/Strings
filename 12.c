#include<stdio.h>

int strlenX(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        iCnt++;
        ptr++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    int iRet=strlenX(Arr);

    printf("Length of string is: %d",iRet);


    return 0;
}