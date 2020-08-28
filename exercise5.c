#include <stdio.h>

void triangle1(int n) {
    char w[2*n - 1];
    for (int i = 0; i < 2 * n; i++) {
        w[i] = ' ';
    }
    w[n - 1] = '*';
    int c = 1;
    for (int i = 0; i < n; i++) {
        printf("%s\n", w);
        w[n - 1 - c] = '*';
        w[n - 1 + c] = '*';
        c++;
    }
}

void square(int n){
    char w[n];
    for (int i = 0; i < n; i++) {
        w[i] = '*';
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", w);
    }
}

void rtriangle(int n){
    char w[n];
    for (int i = 0; i < n; i++) {
        w[i] = ' ';
    }
    for (int i = 0; i < n; i++) {
        w[i] = '*';
        printf("%s\n", w);
    }
}

void triangle2(int n){
    char w[n];
    for (int i = 0; i < 2*n; i++) {
        if (i < n){
            w[i] = '*';
            printf("%s\n", w);
        }
        else if (i == n)
            continue;
        else {
            w[n - (i - n)] = ' ';
            printf("%s\n", w);
        }
    }
}

int main(int cc, char **vv) {
    int n;
    if(sscanf(vv[1], "%d", &n) != 1){
        printf("Error \n");
        return 0;
    };
    triangle1(n);
    printf("\n\n\n");
    square(n);
    printf("\n\n\n");
    rtriangle(n);
    printf("\n\n\n");
    triangle2(n);
    return 0;
}
