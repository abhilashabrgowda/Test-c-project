#include <stdio.h>

finance1() {
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        if(i < n) {
            printf(", ");
        }
    }

   // return 0;
}
