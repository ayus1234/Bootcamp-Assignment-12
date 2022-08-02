//Recursive function to print first N even natural numbers in reverse order

#include<stdio.h>

void printEvenReverseN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printEvenReverseN(N);
    return 0;
}

void printEvenReverseN(int num)
{
    if(num>0)
    {
        printf("%d ",2*num);
        printEvenReverseN(num-1);
    }
}