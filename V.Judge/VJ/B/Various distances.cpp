#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long manhantanDistance(vector<long long> vet, int n){
    long long result=0;
    
    for( int i=0; i< n; i++){
        result += abs(vet[i]);
    }
    
    return result; 

}

double euclidian(vector<long long>vet, int n){
    
    long long result = 0;
    
    for( int i = 0; i < n; i++){
        result += abs(vet[i]) * abs(vet[i]);
    }
    
    return sqrt(result); 
}

int chebisk(vector< long long> vet, int n){
    int max = 0;
    
    for(int i =0 ; i< n ; i++){
        if(abs(vet[i])>max){
            max = abs(vet[i]);
        }
    }
   
   return max; 
}

int main()
{
    int n;
    
    cin >> n;
    
    vector<long long> vet(n);
    
    for(int i=0; i<n; i++){
        cin>> vet[i];
        
    }
    
    cout << manhantanDistance(vet,n) << endl; 
    cout << fixed << setprecision(15) << euclidian(vet, n) << endl;
    cout << chebisk(vet,n) << endl;
    
    
    return 0; 
    
}