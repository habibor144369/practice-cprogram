// pointer to pointer value replace in c program...

#include <stdio.h>

int main() {
    int a = 12;

    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****n = &r;
    int *****m = &n;
    int ******x = &m;
    int *******l = &x;
    int ********c = &l;

    ********c = 194;

    printf("%d \n", a);
    printf("%d \n", ********c);

return 0;
}

