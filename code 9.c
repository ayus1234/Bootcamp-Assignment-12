//Recursive function to print octal of a given decimal number

#include<stdio.h>

void printOctal(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printOctal(N);
    return 0;
}

void printOctal(int num)
{
    if(num>0)
    {
        printOctal(num/8);
        printf("%d",num%8);
    }
}