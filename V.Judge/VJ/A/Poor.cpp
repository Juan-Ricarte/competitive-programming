
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    cin>> a>>b>>c;
    int soma = a+b+c;
    
    if( a==b || a==c || b==c) {
        if((soma/3)!=a || (soma/3)!=b || (soma/3)!=c)
            cout << "Yes";
        else{
            cout << "No";
        }
    }else{
        cout << "No";
    }    
    
    
}