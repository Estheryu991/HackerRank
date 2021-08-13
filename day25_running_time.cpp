#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()   {
    
    int t;
    cin >>t;
    while(t--)
    {
        int number;
        cin >>number;
        int check=0;
        
        if(number<2)
        {
            cout <<"Not prime"<<endl;
        }
        else 
        {
            for(int i=2;i*i<=number;i++)
            {
                if(number%i==0)
                {
                    check=1;
                    break;
                }
            }
            
            if(check==1)
            {
                cout<<"Not prime"<<endl;
            }
            else 
            {
                cout<<"Prime"<<endl;
            }
        }
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
