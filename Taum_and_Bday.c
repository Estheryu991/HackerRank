#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned long long int B, W, X, Y, Z, black, white, BtoW, WtoB, sum, T;

scanf("%llu", &T);
 
while(T--)
    {
    scanf("%llu", &B);
    scanf("%llu", &W);
    scanf("%llu", &X);
    scanf("%llu", &Y);
    scanf("%llu", &Z);
    
    black = B * X;
    white = W * Y;
    BtoW = W * (Z + X);
    WtoB = B * (Z + Y);
    
    //no transfer
    sum = 0;
    sum = black + white;
    
    if ( black + BtoW < sum)
        sum = black + BtoW;
    if ( white + WtoB < sum)
        sum = white + WtoB;
    
    printf("%llu\n", sum);
    }
}
