//Recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void printOddReverseN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printOddReverseN(N);
    return 0;
}

void printOddReverseN(int num)
{
    if(num>0)
    {
        printf("%d ",2*num-1);
        printOddReverseN(num-1);
    }
}