#include <stdio.h>
#include <string.h>
int main() {
    char s[1000], sym;
    gets(s);
    int i = strlen(s) - 1;
    printf("%d\n", strlen(s));
    printf("New string: ");
    while (i >= 0){
        printf("%c", s[i]);
        i--;
    }
    printf("\n");

    return 0;
}
