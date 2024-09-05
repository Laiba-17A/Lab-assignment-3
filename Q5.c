#include <stdio.h>

int main() {
    float principle, rate_of_interest, time_period, interest;

    printf("Please enter the principle amount (between 100 and 1000000): ");
    scanf("%f", &principle);
    if(principle < 100 || principle > 1000000) {
        printf("Invalid principle amount.\n");
        return 0;
    }

    printf("Please enter the rate of interest (between 5 and 10): ");
    scanf("%f", &rate_of_interest);
    if(rate_of_interest < 5 || rate_of_interest > 10) {
        printf("Invalid rate of interest.\n");
        return 0;
    }

    printf("Please enter the time period in years (between 1 and 10): ");
    scanf("%f", &time_period);
    if(time_period < 1 || time_period > 10) {
        printf("Invalid time period.\n");
        return 0;
    }

    interest = (principle * rate_of_interest * time_period) / 100;

    printf("The interest is: %f\n", interest);

    return 0;
}
