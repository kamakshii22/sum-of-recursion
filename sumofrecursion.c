#include<stdio.h>
int sum=0;
// Recursion Function
void addition(int s)
    {sum = sum+s;}
int add(int i);

// Recursion Function
int add (int n)
{   int s;
    if (n != 0)
        { s = (n%10 + add(n/10));}
    else
    { s=0;}
    return s;
}
int main()
{   int a=1;
    while (a==1)
    {   int i;
        printf("Enter the number to be added (enter 0 when over):");
        scanf("%d",&i);
        if (i!=0)
            {addition(i);}
        else
            {a=0;}
    }
    printf("Sum of Digits is: %d",sum);
{   int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int sum;
    sum = add(n);
    printf("The sum of Digits of the Number is: %d", sum);
    return 0;
}
