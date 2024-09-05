#include <stdio.h>

int main() {
    int num_1, num_2, temp;

    printf("Please enter the first integer: ");
    scanf("%d", &num_1);

    printf("Please enter the second integer: ");
    scanf("%d", &num_2);

    temp = num_1;
    num_1 = num_2;
    num_2 = temp;

    printf("First integer: %d\n", num_1);
    printf("Second integer: %d\n", num_2);

    return 0;
}
