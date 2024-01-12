#include <stdio.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n, compMax = 0, k, npassos;

    // Lê o tamanho da sequência
    cin >> n;
    
    //vetor de empregados
    int a[25000];

    // Lê os elementos da sequência e armazena no array a
    for (int i=1; i <= n;i++)
        cin >> a[i];

    // Itera sobre os elementos da sequência
    for (int i = 1; i <= n;i++) {
        k = a[i];
        npassos = 0;

        // Quantos passos são necessários para chegar até um elemento que que não aponta para ninguém
        while (k > 0){
            k = a[k];
            npassos++; 
        }    
        // Atualiza o comprimento máximo
        if(npassos>compMax){
            compMax=npassos;
        }

    }

    // Imprime o comprimento máximo encontrado mais 1, pois +1 inclui o elemento de partida
    cout << compMax + 1; 

    return 0;
}
