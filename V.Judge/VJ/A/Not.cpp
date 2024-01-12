#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cin>> x;
    
    if(x==1){
        cout<< "0"<<endl;
    }else{
        cout<<"1"<<endl;
    }

    return 0;
}


/*MELHOR VERSÃO
#include <iostream>
using namespace std;
int main() { 
    int x; 
    cin >> x; 
    cout << (x == 1 ? "0" : "1") <<endl; 
    return 0; 
}
*/