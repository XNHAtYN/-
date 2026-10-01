#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[4][601];
        int i, min = 0, max = 0, min_count = 0, max_count = 0;
        for (i = 0; i < 4; i++) scanf("%600s", s[i]);
        for (i = 1; i < 4; i++) {
            if (strlen(s[i]) < strlen(s[min])) min = i;
            if (strlen(s[i]) > strlen(s[max])) max = i;
        }
        for (i = 0; i < 4; i++) {
            if (strlen(s[i]) == strlen(s[min])) min_count++;
            if (strlen(s[i]) == strlen(s[max])) max_count++;
        }
        if (min_count == 1 && max_count == 3) printf("%c\n", 'A' + min);
        else if (max_count == 1 && min_count == 3) printf("%c\n", 'A' + max);
        else printf("C\n");
    }
    return 0;
}
