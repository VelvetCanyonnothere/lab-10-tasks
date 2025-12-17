#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30];
    int longestIndex = 0;
    int longestLength = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%29s", names[i]);
        int len = strlen(names[i]);
        if (len > longestLength) {
            longestLength = len;
            longestIndex = i;
        }
    }

    printf("Longest Name: %s\n", names[longestIndex]);
    printf("Length: %d\n", longestLength);

    return 0;
}
