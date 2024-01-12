
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> palavras(n );
    
    for(int i=0; i<n;i++){
        cin >> palavras[i];
    }
    
    map<string, int> quant;
    
    for(const auto &str : palavras){
        quant[str]++;
    }
    
    int maxOcorrencias = 0; 
    for(const auto &par : quant){
        int ocorrencias = par.second; 
        maxOcorrencias = max(maxOcorrencias, ocorrencias); 
    }
  
    for(const auto &par : quant){
        if(par.second == maxOcorrencias)
            cout << par.first << endl;
    }
    
    return 0; 
}