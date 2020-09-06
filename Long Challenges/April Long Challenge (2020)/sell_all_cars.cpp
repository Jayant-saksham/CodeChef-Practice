// Ek saal me ek hi bechni hai
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
            int price;
            cin>>price;
            V.push_back(price);
        }
        sort(V.begin(), V.end(), greater<>());
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+max(0,V[i]-i);
            ans=ans%1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}