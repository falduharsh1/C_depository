#include <stdio.h>

int main() {
    char str[50];
    int i,n;
    printf("Enter a string: ");
    gets(str);

    n = strlen(str);
    for (i=n-1; i>=0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

