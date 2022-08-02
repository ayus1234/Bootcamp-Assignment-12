//Recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void printReverseN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printReverseN(N);
    return 0;
}

void printReverseN(int num)
{
    if(num>0)
    {
        printf("%d ",num);
        printReverseN(num-1);
    }
}