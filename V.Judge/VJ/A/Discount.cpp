#include <stdio.h>
#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int a,b;
    double dif;
    double  result;
    
    cin>>a >>b;
    
    dif= a-b;
    
    result = (100* dif)/a;
    cout<<fixed<< setprecision(20)<<result<<endl;
    
    
}