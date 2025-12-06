#include<stdio.h>

void Display(char *ptr)
{
    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;
}

int main()
{
    char Arr[50];
    printf("Enter a string:");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}