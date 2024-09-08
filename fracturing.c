//********************************************************
// fracturing.c
// Author: Farrah Mccloud
// Class: COP 3223, Professor Parra
// Purpose: This program is for writing different functions
// to calculate distance, perimeter, height, area, and width.
// 
// Input: User's x and y values
//
// Output: Distance, perimeter, height, area, width.
// //********************************************************


// Header file for input output functions
#include <stdio.h>
#include <math.h>

// Defining PI
#define PI 3.14159

//Defining variables
double x1, x2;
double yVal1, yVal2;

double noRepeat = 0;

// Calculates distance between x and y points.
double calculateDistance()
{
    double distance = sqrt(pow(x2-x1, 2) + pow(yVal2-yVal1, 2));
    if (noRepeat == 0) 
    {
        printf("\nThe distance between the two points is %.3f", distance);
        noRepeat = 1;
    }
    return distance;
}

double calculatePerimeter()
{
    double distance = calculateDistance();
    double perimeter = (2 * PI * distance);
    printf("\nThe perimeter of the city encompassed by your request is %.3f", perimeter);
    
    return 4.0;
}

double calculateArea ()
{
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);
    printf("\nThe area of the city encompassed by your request is %.3f", area);

    return 2.0;
}

double calculateWidth()
{
    double width = (x2-x1);
    printf("\nThe width of the city encompassed by your request is %.3f", width);
    
    return 1.0;
}

double calculateHeight()
{
    double height = (yVal2-yVal1);
    printf("\nThe height of the city encompassed by your request is %.3f", height);

    return 1.0;
}

int main(int argc, char**argv)
{
    printf("\nEnter x1, x2:");
    scanf("%lf %lf", &x1, &x2);
    printf("\nEnter y1, y2:");
    scanf("%lf %lf", &yVal1, &yVal2);

    printf("\nPoint #1 entered: x1 = %.3f, y1 = %.3f", x1, yVal1);
    printf("\nPoint #2 entered: x2 = %.3f, y2 = %.3f", x2, yVal2);
    

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}