#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; 
    cin >> t; 
 
    while(t--){
        int n; 
        cin >> n; 
 
        vector<int> a(n);
        set<int> uniqueValues; 
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
            uniqueValues.insert(a[i]);
        }
 
        int uniqueValuesSize = uniqueValues.size(); 
 
        if(uniqueValuesSize <= 2){
            int isPossible = 1;
            sort(a.begin(), a.end());
            int commonDifference = a[a.size() - 1] - a[0];
 
            for(int i = 0, j = a.size() - 1; i < j; i++, j--){
                if(a[j] - a[i] != commonDifference){
                    isPossible = 0;
                    break;
                }
            }
 
            if(isPossible)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else{
            cout << "NO" << endl;
        }
        
    }
    return 0; 
}