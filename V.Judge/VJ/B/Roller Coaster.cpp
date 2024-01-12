#include <iostream>

using namespace std;
int main() {
  int N, H,K, result=0;

  cin>> N;
  cin >> K;
  for(int i=0; i<N;i++){
    cin>> H;
    if(H>= K){
      result ++;
    }
    
  }
  cout << result;
}