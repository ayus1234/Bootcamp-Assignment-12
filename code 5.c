//Recursive function to print first N even natural numbers

#include<stdio.h>

void printEvenN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printEvenN(N);
    return 0;
}

void printEvenN(int num)
{
    if(num>0)
    {
        printEvenN(num-1);
        printf("%d ",2*num);
    }
}