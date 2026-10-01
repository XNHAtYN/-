#include <stdio.h>

int main(void)
{
    char s[1000001];
    int i;
    scanf("%1000000s", s);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '5') s[i] = '*';
    }
    printf("%s\n", s);
    return 0;
}
