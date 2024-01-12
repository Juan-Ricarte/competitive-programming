#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pares,par_ok;
    vector<int>num;
    bool flag = true;
    
    
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        if(l%2==0){
            if(l%3==0 || l%5==0){
                continue;
            }else{
                flag = false;
                break;
            }
        }
        
    }
    
    if(flag){
        cout << "APPROVED"<<endl;
    }else{
        cout<<"DENIED"<<endl;
    }
 
    
}