#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string first[n];
        string last[n];
        for(int i=0;i<n;i++){
            cin>>first[i]>>last[i];
        }
        int A[n]={0};
        for(int i=0;i<(n-1);i++){
            for(int j=i+1;j<n;j++){
                if(first[i]==first[j]){
                    A[i]++;
                    A[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(A[i]==0){
                cout<<first[i]<<endl;
            }
            else{
                cout<<first[i]<<" "<<last[i]<<endl;
            }
        }
    }
    return 0;
}