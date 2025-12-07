#include<stdio.h>
#include<stdbool.h>

int ChkOccurance(char *ptr,char ch)
{
    int iCnt=1;
    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            return iCnt;
        }
        iCnt++;
        ptr++;
        
    }
    return -1; 
}

int main()
{
    char Arr[100];
    char cValue='\0';

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search : \n");
    scanf(" %c",&cValue);

    int iRet=ChkOccurance(Arr,cValue);

    if(iRet!=-1)
    {
        printf("The letter is present at : %d",iRet);
    }
    else
    {
        printf("The letter is not present in string");
    }

    return 0;
}