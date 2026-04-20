#include <stdio.h>
#include <stdbool.h>
int main() {
    int x, num, sum = 0;
    do 
    {
        printf("Enter the number:");
        scanf("%d", &x);
        printf("The number is:%d\n", x);
        num = x;
        if (x % 2 == 0)
        {
            sum = sum + num;
        }
        printf("The sum is:%d\n", sum);
    }
    while (num != -1);
    return 0;
}
