#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char c[100];
    fgets(c , sizeof(c) , stdin);
    printf("Name: %s" , c);
    
    int age; 
    scanf("%d" , &age);
    printf("Age: %d\n" , age);
    
    float cg;
    scanf("%f" , &cg);
    printf("CGPA: %.2f\n" , floorf(cg*100)/100);
    
     getchar();
    
    char a[2];
    fgets(a , sizeof(a) , stdin);
    printf("Grade: %s\n" , a);

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    return 0;
}