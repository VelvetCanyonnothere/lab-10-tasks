#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }
    return count;
}

int main() {
    char names[5][30];
    for (int i = 0; i < 5; i++)
        scanf("%29s", names[i]);

    for (int i = 0; i < 5; i++)
        printf("%s -> %d vowels\n", names[i], countVowels(names[i]));

    return 0;
}

