#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n; 
    long long result=0;
    cin >> n;
    
    
    vector<int>A(n);
    vector<int>B(n);
    
    
    for (int i=0; i<n;i++){
        cin >> A[i];
    }
    for(int i=0; i<n;i++){
        cin >> B[i];
    }
    
    for(int i=0; i<n;i++){
        result+= A[i]*B[i];
    }
    
    if(result==0)
        cout << "Yes";
    else
        cout <<"No";
    
}