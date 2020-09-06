#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,l,k,dif;
    cin>>t;
    while(t--){
        long long counts=0;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<(n-1);i++){
            dif=A[i]-A[i+1];
            k=abs(dif);
            l=k-1;
            counts+=l;
        }
        cout<<counts<<endl;
    }
    return 0;
}