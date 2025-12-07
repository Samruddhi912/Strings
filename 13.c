#include<stdio.h>

int ChkCapital(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if((*ptr>='A') && (*ptr<='Z'))
        {
            iCnt++;
        }
        ptr++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    int iRet=ChkCapital(Arr);

    printf("Number of captial character in string are: %d\n",iRet);


    return 0;
}