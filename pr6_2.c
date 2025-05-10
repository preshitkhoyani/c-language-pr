#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int fre[256] = {0}; 
    int i;

    printf("Input: Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

   
    for (i = 0; str[i] != '\0'; i++) {
        fre[(unsigned char)str[i]]++;
    }

    printf("Output:\n\nFrequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (fre[i] > 0) {
            printf("%c => %d\n", i, fre[i]);
        }
    }

}
