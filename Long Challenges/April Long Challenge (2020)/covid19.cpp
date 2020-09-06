// Distance must be greater than equal to 6

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> V;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                V.push_back(i);
            }
        }
        string ans="YES";
        for(int i=0;i+1<V.size();i++){
            if(V[i+1]-V[i]<6){
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}