#include <iostream>
#include <vector>

using namespace std;
int main() {
  int N;
  cin >> N;
  
  vector<int> ordem(N+1);

  for(int i=1; i <= N;i++){
    int posicao;
    cin >> posicao;
    
    ordem[posicao]=i;
  }
  
  for(int i=1;i<=N;i++){
    cout << ordem[i]<<" ";
}
}  
