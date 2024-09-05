#include <stdio.h>

int main() {
    float fuel_average, fuel_consumed, total_cost;
    int distance = 1207;
    int forwardPrice = 118;
    int returnPrice = 123;

        printf("Please enter the car fuel average (positive number only):");
        scanf("%f", &fuel_average);
        if(fuel_average <= 0) {
            printf("Error: Fuel average must be a positive number.\n");
            return 0;
        }

    fuel_consumed = (distance * 2) / fuel_average; 
    total_cost = (distance / fuel_average * forwardPrice) + (distance / fuel_average * returnPrice);

    printf("\nTotal fuel consumed for the trip is %f\n", fuel_consumed);
    printf("Total cost for the trip is %f\n", total_cost);

    return 0;
}
