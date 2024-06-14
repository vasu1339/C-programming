#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int total;
    int size;
    
    scanf("%d" , &total);
    scanf("%d" , &size);
    
    int each_team = total/size;
    int leftout = total%size;
    printf("The number of friends in each team is %d and left out is %d" , each_team , leftout);
    return 0;
}