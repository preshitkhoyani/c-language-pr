#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, count;
    int visited[100] = {0};

    printf("Input: Enter any string: ");
    gets(str); // Simple input method (OK for learning purpose)

    len = strlen(str);

    printf("Output:\nFrequency of each letter:\n");

    for (i = 0; i < len; i++) {
        if (visited[i] == 1)
            continue;

        count = 1;
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c => %d\n", str[i], count);
    }

}
