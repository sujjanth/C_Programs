#include<stdio.h>
int main(){
    int l[10];
    int b[10];
    l[0] = 1189;
    b[0] = 841;
    for(int i=1;i<9;i++){
        l[i] = b[i-1];
        b[i] =  l[i-1]/2;
        printf("The dimensions of A%d is %d x %d\n",i,l[i],b[i]);
    }
    
    return 0;
}