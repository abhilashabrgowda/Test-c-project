#include <stdio.h>
sumof2() {    

    int number1, number2, sum;
    
    printf("\nEnter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
   // return 0;
}

