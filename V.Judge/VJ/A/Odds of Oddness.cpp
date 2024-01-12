#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
  int N;
  double resposta;

  cin >> N;
  if(N % 2==0){
    resposta =  0.5;
    cout << resposta << endl;
  }
  
  else{
    resposta= static_cast <double>((N+1)/2)/N;
    cout << resposta << endl;
    
  }
  
  
}