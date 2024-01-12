#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    
    cin>> a>>b>>c>>d;
    
    long long result = max(a*c, a*d );
    long long result2 = max(b*d, b*c);
    
    result = max(result2, result);
    
    cout<<result<<endl;
    return 0;
}