#include <stdio.h>

int main() {
    char names[5][30];
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%29s", names[i]);
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

