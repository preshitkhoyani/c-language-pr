#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, Pal = 1;

    printf("Enter any string: ");
    scanf("%s", str); 

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            Pal = 0;
            break;
        }
    }

    if (Pal) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

}

