#include <stdio.h>
int main()
{
    char name[100], rev[100];
    printf("Enter the string: ");
    fgets (name, 100, stdin);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    printf("%d\n", len);
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[j] = name[i];
        j++;
    }
    rev[j] = '\0';
    printf("%s", rev);
    return 0;
}
