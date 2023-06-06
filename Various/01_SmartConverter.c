/*
Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheir, repectively.

Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 x temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie. you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs of f (for feet, pounds or degress Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.

You may use functions to complete this exercise, but that is not required. However, you will need to use a comparison operation with characters.
*/

#include <stdio.h>

double meterToFeet(double);
double gramToPound(double);
double celsiusToFahrenheit(double);

int main(void)
{
    char unit;
    int nConversions = 0;
    int i = 0;
    double value;

    scanf("%d", &nConversions);

     while(i < nConversions)
     {
        scanf("%lf %c", &value, &unit);

        switch(unit)
        {
        case 'm':
            printf("%.6lf ft\n", meterToFeet(value));
            break;
        case 'g':
            printf("%.6lf lbs\n", gramToPound(value));
            break;
        case 'c':
            printf("%.6lf f\n", celsiusToFahrenheit(value));
            break;
        }

        i++;
     }

    return 0;
}

double meterToFeet(double meter)
{
    return meter*3.2808;
}

double gramToPound(double gram)
{
    return gram*0.002205;
}

double celsiusToFahrenheit(double celsius)
{
    return celsius*1.8 + 32;
}