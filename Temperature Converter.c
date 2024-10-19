#include<stdio.h>

int main()
{
    printf("Assignment 4 : Temperature Converter\n\n");
    printf("Task : Write a C program that allows the user to choose between converting Celsius to Fahrenheit or Fahrenheit to Celsius.\nTake the necessary input and perform the conversion.");
 
    float Fahrenheit, Celsius;
    
    printf("\n\na) Celsius To Fahrenheit : ");
    
    printf("\nEnter the temperature in celsius : ");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("\nThe %.2f temperature in celsius is converted %.2f temperature in Fahrenheit", Celsius, Fahrenheit);
    
    printf("\n-------------------------------------------------\n");
    
    printf("b) Fahrenheit to Celsius : ");
    
    printf("\nEnter the temperature in fahrenheit : ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * 5/9;
    printf("\nThe %.2f temperature in fahrenheit is converted %.2f temperature in celsius", Fahrenheit, Celsius);
    
    return 0;
}
