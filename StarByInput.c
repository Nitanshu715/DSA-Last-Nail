#include <stdio.h>
int main() {
    int x;
    printf("Enter the size of star pattern:");
    scanf("%d", &x);
    for (int i = x; i >= 1; i--)
    {
        printf("\n");
        for(int j= i; j <= x; j++)
        {
            printf("*");
        }
    }
    return 0;
}
