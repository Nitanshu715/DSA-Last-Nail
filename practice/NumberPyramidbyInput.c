#include <stdio.h>
int main() {
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    for (int i = 1; i <=x; i++)
    {
        printf("\n");
        for(int j = 1; j<=i; j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}
