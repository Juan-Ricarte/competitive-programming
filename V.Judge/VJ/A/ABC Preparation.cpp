#include <iostream>

using namespace std; 

int main() {
  int a;
  
  //inicializar
  int menor = 10000; 
  
  //preenche os 4
  for(int i = 0; i < 4; i++){
    cin >> a; 
    //atualiza o novo menor
    if (a < menor) menor = a; 
  }

  cout << menor << endl; 
}