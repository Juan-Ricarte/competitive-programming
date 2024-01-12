
#include <stdio.h>
#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    
    vector <tuple<int,int,int>> play(n);
    
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        play[i]= make_tuple(a,b,c);
    }
    
    sort(play.begin(),play.end(), [](auto &left,auto &right){
        return get<1>(left) < get<1>(right); 
    });
    
    int ans= -1;
    for(int i = 0; i<n; i++){
        if(get<2>(play[i])> get<0>(play[i])){
            ans = get<1>(play[i]);
            break;
        }
        
    }
    cout << ans<<endl;
    
    
}
