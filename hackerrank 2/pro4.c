#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d" , &a);
    
    int last = a%10;
    int first = a/100;
    int mid = (a/10)%10;
    printf("%d%d%d" , last ,mid , first);
    return 0;
}