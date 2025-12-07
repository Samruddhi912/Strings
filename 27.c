#include<stdio.h>

void Replace(char *ptr)
{
    int iCnt=0;
    for(int iCnt=0;ptr[iCnt]!='\0';iCnt++)
    {
        printf("%c\n",ptr[iCnt]);
    }

}

int main()
{
    char Arr[100];
    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    return 0;
}