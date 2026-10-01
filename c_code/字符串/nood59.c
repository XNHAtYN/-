#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char line[10001];
    int i, at_start = 1;
    if (!fgets(line, sizeof(line), stdin)) return 0;
    for (i = 0; line[i] != '\0'; i++) {
        if (isspace((unsigned char)line[i])) {
            at_start = 1;
        } else if (at_start) {
            putchar(toupper((unsigned char)line[i]));
            at_start = 0;
        }
    }
    putchar('\n');
    return 0;
}
