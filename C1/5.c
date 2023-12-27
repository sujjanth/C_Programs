#include<stdio.h>
int main(){
    int l,b,r,p_r,a_r,c_c,a_c;
    printf("Enter l and b of rectangle : ");
    scanf("%d %d",&l,&b);
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    p_r = 2 * (l+b);
    a_r = l*b;
    c_c = 2*3.14*r;
    a_c = 3.14*r*r;
    printf("Area and perimeter of rectangle is %d and %d\n",a_r,p_r);
    printf("Area and circumference of circle is %d and %d\n",a_c,c_c);
    return 0;
}