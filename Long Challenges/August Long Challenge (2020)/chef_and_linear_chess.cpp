#include<bits/stdc++.h>
using namespace std;
int decision(long long int A[], int n, int k){
    int flag=0;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(A[i]<k && k%A[i]==0 && A[i]>max){
            flag++;
            max=A[i];                      
        }        
    }
    if(flag==0){
        return -1;
    }
    else{
        return max;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int k;
        cin>>n>>k;
        long long int P[n];
        for(int i=0;i<n;i++){
            cin>>P[i];
        }
        cout<<decision(P,n,k)<<endl;;
    }
    return 0;
}