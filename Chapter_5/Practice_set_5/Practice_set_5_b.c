#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    /* Input temperature in Celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* Call the function to convert Celsius to Fahrenheit */
    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}
