#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char *ptr,char ch)
{
    int iCnt=0;
    bool bFlag=false;
    while(*ptr!='\0')
    {
        if((*ptr==ch))
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
    char cValue='\0';

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search : \n");
    scanf(" %c",&cValue);

    int iRet=CountFrequency(Arr,cValue);

    
    printf("The frequency of character in string is : %d",iRet);
    
    

    return 0;
}