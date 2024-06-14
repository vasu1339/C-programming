#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int d1 , c1 , d2 , c2;
    
    scanf("%d" , &d1);
    scanf("%d" , &c1);
    scanf("%d" , &d2);
    scanf("%d" , &c2);
    
    int total1 = d1*100+c1;
    int total2 = d2*100+c2;
    int total3 = total1+total2;
    int dollar = total3/100;
    int cents = total3%100;
        printf("%d\n%d" , dollar , cents);
    
    return 0;
}