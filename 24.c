#include<stdio.h>
#include<stdbool.h>

int LastOccurance(char *ptr,char ch)
{
    int iCnt=1,iPos=-1;
    while(*ptr!='\0')
    {
        if((*ptr==ch))
        {
            iPos=iCnt;
        }
        iCnt++;
        ptr++;
    }
    return iPos;
}

int main()
{
    char Arr[100];
    char cValue='\0';

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search : \n");
    scanf(" %c",&cValue);

    int iRet=LastOccurance(Arr,cValue);

    if(iRet==-1)
    {
        printf("There is no such occurence of the letter.");
    }
    
    else
    {
    printf("Last Occurence of letter is: %d\n",iRet);
    }
    return 0;
}