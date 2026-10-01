#include <stdio.h>
#include <string.h>

int can_eat(const char *a, const char *b)
{
    return (strcmp(a, "elephant") == 0 && strcmp(b, "tiger") == 0) ||
           (strcmp(a, "tiger") == 0 && strcmp(b, "cat") == 0) ||
           (strcmp(a, "cat") == 0 && strcmp(b, "mouse") == 0) ||
           (strcmp(a, "mouse") == 0 && strcmp(b, "elephant") == 0);
}

int main(void)
{
    char niuniu[10], niumei[10];
    scanf("%9s%9s", niuniu, niumei);
    if (can_eat(niuniu, niumei)) printf("win\n");
    else if (can_eat(niumei, niuniu)) printf("lose\n");
    else printf("tie\n");
    return 0;
}
