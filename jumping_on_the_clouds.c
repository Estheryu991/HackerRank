#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
#include<stdio.h>
#include<assert.h>

int main() {
    int n;
    scanf("%d", &n);
    int *c = malloc(sizeof(int)* n);
    for(int c_i = 0; c_i < n; c_i++) {
        scanf("%d", &c[c_i]);
        
    }
    int i, count=0;
    for(i=0;i<n;i++) {
        if(i+1==n-1 || i+2==n-1) {
            count++;
            printf("%d\n", count);
            break;
        }
    else if(c[i+2]==0) {
        i++;
        count++;
        
    }
    else if (c[i+1]==0) {
        count++;
    }
    }
    return 0;
}
