#include<stdio.h>

int ChkSmall(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if((*ptr=='a') || (*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')||(*ptr=='A') || (*ptr=='E')||(*ptr=='I')||(*ptr=='O')||(*ptr=='U'))
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

    int iRet=ChkSmall(Arr);

    printf("Number of vowels  in string are: %d\n",iRet);


    return 0;
}