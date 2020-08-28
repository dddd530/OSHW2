#include <stdio.h>

void swap(int *n, int *m){
    int t = *n;
    *n = *m;
    *m = t;
}

int main() {
    int n, m;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Enter m: \n");
    scanf("%d",&m);

    swap(&n, &m);
    printf("n: %d\n", n);
    printf("m: %d\n", m);
    return 0;
}
