#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a , b , c;
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    
    int profit = (b-c)*a - 100;
        printf("%d" , profit);
    return 0;
}