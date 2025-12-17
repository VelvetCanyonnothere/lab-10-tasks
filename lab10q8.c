#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char s[]) {
    for (int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
}

void sortString(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
}

int main() {
    char a[50], b[50];

    scanf("%49s", a);
    scanf("%49s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    toLower(a);
    toLower(b);

    sortString(a);
    sortString(b);

    if (strcmp(a, b) == 0)
        printf("They are anagrams!");
    else
        printf("Not anagrams");

    return 0;
}
