#include <stdio.h>
int main() {
    int a;
    printf("Enter the number:");
    scanf ("%d", &a);
    if (a % 2 == 0){
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }
    return 0;
}
