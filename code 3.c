//Recursive function to print first N odd natural numbers

#include<stdio.h>

void printOddN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printOddN(N);
    return 0;
}

void printOddN(int num)
{
    if(num>0)
    {
        printOddN(num-1);
        printf("%d ",2*num-1);
    }
}