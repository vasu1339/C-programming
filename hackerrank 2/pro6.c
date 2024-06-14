#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    void random(char n)     
    {
        if(isalpha(n))
        {
            if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
            {
                printf("Vowel");
            }
            else
            {
                printf("Consonant");
            }
            
        }
        else
        {
            printf("Not an alphabet");
        }
    }
    int main()
    {
        char n;
        scanf("%c" , &n);
        random(n);
        return 0;
        
    }
    