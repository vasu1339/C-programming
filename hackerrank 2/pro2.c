#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float p , t, r;
    
    scanf("%f" , &p);
    scanf("%f" , &t);
    scanf("%f" , &r);
    
    float interest = (p*t*r)/100;
    float total = p + interest;
    float discount = interest * 0.02 ; 
    float final = total-discount;
    
    
    printf("%.2f \n" , interest);
    printf("%.2f \n" , total);
    printf("%.2f \n" , discount);
    printf("%.2f \n" , final);
    
    return 0;
}