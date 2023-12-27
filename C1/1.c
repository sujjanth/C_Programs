#include<stdio.h>
int main(){
    int salary,gross;
    printf("Enter basic pay: ");
    scanf("%d",&salary);
    int ra,da;
    da = 0.4*salary;
    ra = 0.2*salary;
    gross = salary + da + ra;
    printf("Gross Salary: %d ",gross);
    return 0;
}