#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    
    cin>> x;
    cin>> y;
    
    int maior = max(x, y); 
    int menor = min(x, y); 
    
    if(menor + 3 > maior){
        cout << "Yes";
    }else{
        cout << "No";
    }
}