#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int length;
    int breadth;
    
    scanf("%d" , &length);
    scanf("%d" , &breadth);
    
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    printf("The required length is %d m\n" , perimeter);
    printf("The required area of carpet is %d sqm\n" , area);
    return 0;
}