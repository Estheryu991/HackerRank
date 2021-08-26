/*Delete the  elements  and  leaving . If both twos plus either the  or the  are deleted, it takes  deletions to leave either  or . The minimum number of deletions is .*/

#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    
    //here goes my code, read input from STDIN, print output to STDOUT.
    
    int N;
    scanf("%d", &N);
    int A[N];
    for(int n=0; n<N; n++) {
        scanf("%d", &(A[n]));
    }
    int res =0, count =0;
    for(int i = 0; i < N; i++) {
        count = 0;
        for (int j = i; j <N;j++) {
            if (A[j] == A[i])
                count++;
        }
        if (count>res)
            res=count;
    }
    printf("%d\n", N-res);
    return 0;
}
