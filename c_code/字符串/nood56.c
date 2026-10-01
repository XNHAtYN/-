#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char s[500005];
    int i;
    scanf("%500000s", s);
    for (i = 0; s[i] != '\0'; i++) s[i] = (char)tolower((unsigned char)s[i]);
    for (i = 0; s[i + 2] != '\0'; i++) {
        if (s[i] == 'b' && s[i + 1] == 'o' && s[i + 2] == 'b') {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
