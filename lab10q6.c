#include <stdio.h>
#include <string.h>

int main() {
    char first[3][30], last[3][30], full[3][70];

    for (int i = 0; i < 3; i++)
        scanf("%29s", first[i]);

    for (int i = 0; i < 3; i++)
        scanf("%29s", last[i]);

    for (int i = 0; i < 3; i++) {
        strcpy(full[i], first[i]);
        strcat(full[i], " ");
        strcat(full[i], last[i]);
    }

    for (int i = 0; i < 3; i++)
        printf("%s\n", full[i]);

    return 0;
}
