//Recursive function to print binary of a given decimal number

#include<stdio.h>

void printBinary(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printBinary(N);
    return 0;
}

void printBinary(int num)
{
    if(num>0)
    {
        printBinary(num/2);
        printf("%d",num%2);
    }
}