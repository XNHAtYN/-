#include <stdio.h>

int main(void)
{
    int shift, i;
    char s[100001];
    scanf("%d%100000s", &shift, s);
    shift %= 26;
    for (i = 0; s[i] != '\0'; i++) s[i] = (char)((s[i] - 'a' + shift) % 26 + 'a');
    printf("%s\n", s);
    return 0;
}
