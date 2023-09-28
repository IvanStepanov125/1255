#include <stdio.h>
#include <math.h>

int main (void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%lf\n", (double)a / b);

    return 0;
}