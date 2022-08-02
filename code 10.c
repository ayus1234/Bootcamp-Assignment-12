//Recursive function to print reverse of a given number

#include<stdio.h>

void printReverse(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printReverse(N);
    return 0;
}

void printReverse(int num)
{
    if(num>0)
    {
        int temp,sum=0;
        temp=num%10;
        printf("%d",sum*10+temp);
        printReverse(num/10);
    }
}