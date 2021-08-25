#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int n; 
    int m;
    int cur_cost = 0;
    int to_spend = -1;
  
    scanf("%d %d %d",&s,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *pendrives = malloc(sizeof(int) * m);
    for(int pendrives_i = 0; pendrives_i < m; pendrives_i++){
       scanf("%d",&pendrives[pendrives_i]);
    }
    
        for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cur_cost = keyboards[i] + pendrives[j];
            if (cur_cost<=s) {
                if (s-cur_cost<s-to_spend) {
                    to_spend = cur_cost;
                }
            }
        }
    }
    printf("%d",to_spend);
    return 0;
}
