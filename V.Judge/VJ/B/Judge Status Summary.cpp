
#include <iostream>

using namespace std;

int main()
{
    int n, errado = 0, tempo = 0, aceito = 0, re = 0;
    string s;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>s;
        if(s == "WA"){
            errado++;
        }
        else if(s== "TLE")
            tempo++;
        else if(s=="AC")
            aceito++;
        else
            re++;
    }
    
    cout<< "AC"<< " x " << aceito << endl;
    cout<< "WA"<< " x " << errado << endl;
    cout<< "TLE"<< " x " << tempo << endl;
    cout<< "RE"<< " x " << re << endl;
  

    return 0;
}