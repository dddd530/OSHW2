#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    int c;
    float f;
    double g;

    c = INT_MAX;
    f = FLT_MAX;
    g = DBL_MAX;

    printf("Size of integer: %d\n", sizeof(c));
    printf("Size of float: %d\n", sizeof(f));
    printf("Size of double: %d\n\n\n", sizeof(g));

    printf("Value of integer: %d\n", c);
    printf("Value of float: %f\n", f);
    printf("Value of double: %e\n", g);
    return 0;
}
