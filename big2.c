#include <stdio.h>

big2() {
  int num1, num2;

  printf("\nEnter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("%d is the larger number.\n", num1);
  } else if (num2 > num1) {
    printf("%d is the larger number.\n", num2);
  } else {
    printf("Both numbers are the same: %d.\n", num1);
  }

 // return 0;
}
