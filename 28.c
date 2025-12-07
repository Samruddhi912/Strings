#include<stdio.h>

void ReverseX(char *ptr)
{
    char *Start=ptr;
    char *End=ptr;

    char temp;

    while(*End!='\0')
    {
        End++;
    }

    End--;


    while(Start<End)
    {
        temp=*Start;
        *Start=*End;
        *End=temp;

        Start++;
        End--;
    }


}

int main()
{
    char Arr[100];
    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    ReverseX(Arr);

    printf("Updated string is : %s",Arr);

    return 0;
}