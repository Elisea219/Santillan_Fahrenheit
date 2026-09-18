#include <stdio.h>

int main() {
   //decalre variables
    float fahrenheit;
    float celsius;

    //display: ask the user for input
    printf("Enter the temperature in Fahrenheit: \n");

        //input:fahrenheit
        scanf("%f", &fahrenheit);

        //output: fahrenheit 
        printf("Fahrenheit: %.2f\n", fahrenheit);

        //process: celsius = (farenheit - 32) * 5 / 9
        celsius = (fahrenheit - 32) * 5 / 9;

        //output: celsius
        printf("Celcuis: %.2f", celsius);

        return 0;
}