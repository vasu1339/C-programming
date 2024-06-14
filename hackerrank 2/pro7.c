#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int units;
    scanf("%d" , &units);
    
    if(units<=200)
    {
        int amount1 = 0.5*units;
        printf("Rs.%d" , amount1);
    }
    else if(units<=400)
    {
        int amount2 = (0.65*units)+100;
        printf("Rs.%d" , amount2);
    }
    
       else if(units<=600)
    {
        int amount3 = (0.80*units)+200;
        printf("Rs.%d" , amount3);
    }
    
       else if(units>600)
    {
        int amount4 = (1.25*units)+425;
        printf("Rs.%d" , amount4);
    }
    return 0;
}