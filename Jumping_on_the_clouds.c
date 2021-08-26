#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    int energy = 100;
    int i = 0;
    
    //make a first move
    i = (i + k) % n;
    if(c[i] == 0)
    {
        energy--;    
    } else if(c[i] == 1) {
        energy = energy - 3;
    }
    
        while(1)
    {
        if(i == 0)    
        {
            break;
        }
        
        i = (i + k) % n;
        
        if(c[i] == 0)
        {
            energy--;    
        } else if(c[i] == 1) {
            energy = energy - 3;
        }
        
    }
    
    printf("%d\n", energy);
    
    return 0;
}
            
