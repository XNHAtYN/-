#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100001];
    int length, i;
    scanf("%100000s", s);
    length = (int)strlen(s);
    for (i = 0; i < length; i++) {
        if (i > 0 && (length - i) % 3 == 0) putchar(',');
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
