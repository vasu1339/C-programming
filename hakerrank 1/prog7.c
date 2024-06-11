#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float num;
    scanf("%f" , &num);
    int z = (int)floor(num);
    int n = (int)ceil(num);
    int a = (int)floor(num);
    
    printf("%d\n" ,z);
    printf("%d\n" ,n);
    printf("%d\n" ,a);
    
   
    
    return 0;
}