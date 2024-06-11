#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    scanf("%d" , &num);
    
    if(num<0)
    {
        num = -num;
    }
    
    int first = num/1000;
    int last = num%10;
    
    int sum  = first + last;
    
    printf("%d" ,sum );
    
    
    return 0;
}
