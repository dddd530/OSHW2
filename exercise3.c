#include <stdio.h>


int main(int cc, char **vv) {
    int n;
    if(sscanf(vv[1], "%d", &n) != 1){
        printf("Error \n");
        return 0;
    };
    char w[2*n - 1];
    for (int i = 0; i < 2*n; i++){
        w[i] = ' ';
    }
    w[n - 1] = '*';
    int c = 1;
    for (int i = 0; i < n; i++){
        printf("%s\n", w);
        w[n -1  - c] = '*';
        w[n - 1 + c] = '*';
        c++;
    }

    return 0;
}
