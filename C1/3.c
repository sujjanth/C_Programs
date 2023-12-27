#include<stdio.h>
int main(){
    float aggre,perc,s1,s2,s3,s4,s5;
    printf("Enter subject marks (out of 100) : ");
    scanf(" %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    aggre = s1+s2+s3+s4+s5;
    perc = (aggre/500)*100;
    printf("Aggregate marks: %.2f\n",aggre);
    printf("Percentage marks: %.2f",perc);
    return 0;
}