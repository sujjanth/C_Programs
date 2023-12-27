#include<stdio.h>
int main(){
    float fah,cel;
    printf("Enter Temperature: ");
    scanf("%f",&fah);
    cel = (fah -32)*5/9;
    printf("Temperature in Celsius: %.2f",cel);
    return 0;
}