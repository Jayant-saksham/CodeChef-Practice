#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>V;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                k-=x;
                V.push_back(1);
            }
            else if(x>k){
                V.push_back(0);
            }

        }
    
        for(int i=0;i<V.size();i++){
            cout<<V.at(i);
        }
        cout<<endl;
        

    }
    return 0;
}