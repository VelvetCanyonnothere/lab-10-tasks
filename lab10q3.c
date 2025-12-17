#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30];
    char search[30];
    int found = 0;

    for (int i = 0; i < 5; i++)
        scanf("%29s", names[i]);

    scanf("%29s", search);

    for (int i = 0; i < 5; i++)
        if (strcmp(names[i], search) == 0)
            found = 1;

    if (found)
        printf("Name Found!");
    else
        printf("Name Not Found!");

    return 0;
}
