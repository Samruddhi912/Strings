#include<stdio.h>

void Replace(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            *ptr='*';
        }
        ptr++;
    }

}

int main()
{
    char Arr[100];
    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    printf("Updated string is : %s",Arr);

    

    return 0;
}