#include <stdio.h>

int main() {
    int n0, n1, n2, n3, n4;
    scanf("%d", &n0);

    n1 = 3 * n0;
    printf("%s", n1 % 2 == 0 ? "even" : "odd");

    if (n1%2==0){
        n2=n1/2;
    }
    else {
        n2=(n1+1)/2;
    }
    n3 = 3 * n2;
    n4 = n3 / 9;

    printf(" %d\n", n4);

    return 0;
}
