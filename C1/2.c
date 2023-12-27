#include<stdio.h>
int main(){
    float dist,feet,inch,meter,centimeter;
    printf("Enter the distance (in km) : ");
    scanf("%f",&dist);
    meter = dist * 1000;
    centimeter = meter * 100;
    inch = centimeter/2.5;
    feet = inch/12;
    printf("Conversions:\n");
    printf("In meters: %.2f\n",meter);
    printf("In centimeters: %.2f\n",centimeter);
    printf("In inch: %.2f\n",inch);
    printf("In feet: %.2f\n",feet);
    return 0;
}