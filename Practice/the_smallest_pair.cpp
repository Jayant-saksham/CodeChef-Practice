#include<bits/stdc++.h>
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
            V.push_back(x);
        }
        sort(V.begin(), V.end());
        cout<<V.at(0)+V.at(1)<<endl;
    }
    return 0;
}