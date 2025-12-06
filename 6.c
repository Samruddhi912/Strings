#include<stdio.h>


int main()
{
    char Arr[]="Hello";
    int i=0;

    printf("%s\n",Arr);

    while(Arr[i]!='\0')
    {
        printf("%c\n",Arr[i]);
        i++;
    }

    return 0;
}