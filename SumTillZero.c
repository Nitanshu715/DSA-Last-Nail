#include <stdio.h>
# include <stdbool.h>
int main(){
    int x, num, sum;
    sum = 0;
    while (num != 0)
    {
    printf("Enter the number:");
    scanf("%d", &x);
    printf("The numbers are %d\n", x);
    num = x;
    sum = sum + num;
    printf("Sum is:%d\n", sum);
    }
    return 0;
}
