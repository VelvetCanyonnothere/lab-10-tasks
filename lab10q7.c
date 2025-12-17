#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char full[100], temp[100], *token;
    char username[100] = "";
    char last[50] = "";
    int count = 0;

    fgets(full, sizeof(full), stdin);
    full[strcspn(full, "\n")] = '\0';

    strcpy(temp, full);
    token = strtok(temp, " ");
    char firstInitial = token[0];

    while (token != NULL) {
        strcpy(last, token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; full[i] != '\0'; i++)
        if (full[i] != ' ')
            count++;

    char initialStr[2] = { firstInitial, '\0' };
    strcat(username, initialStr);
    strcat(username, last);

    for (int i = 0; username[i]; i++)
        username[i] = tolower(username[i]);

    char num[10];
    sprintf(num, "%d", count);
    strcat(username, num);

    printf("%s", username);

    return 0;
}
