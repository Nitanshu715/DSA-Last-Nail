#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("The size of the array will be: arr[%d]\n", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of the array: ");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            {
                printf("Hey Found an even number: %d\n", arr[i]);
            }
    }
}
