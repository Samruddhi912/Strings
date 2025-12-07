#include<stdio.h>
#include<string.h>

void Display(char *ptr)
{
    while(*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    
}

int main()
{
    char Arr[50];
    printf("Enter a string:");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    int iRet=strlen(Arr);

    printf("Length of array is: %d\n",iRet);

    return 0;
}