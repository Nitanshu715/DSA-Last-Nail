#include <stdio.h>
int isEven (int a)
{
    if (a % 2 == 0)
    {
        printf("Even");
    }
    else 
    {
        printf("Odd");
    }
}
int main ()
{
    int a;
    printf("Enter the Number:");
    scanf("%d", &a);
    printf("The number is:");
    isEven(a);
    return 0;
}
