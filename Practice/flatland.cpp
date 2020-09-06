#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int A[36]={0};
    // why 36?? see constraints
    for(int i=1;i<36;i++){
        A[i]=i*i;
    }
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n!=0){
            for(int i=1;i<36;i++){
                if(A[i]<=n && A[i+1]>n){
                    n=n-A[i];
                    count++;
                }
            }
        }   
    cout<<count<<endl;
   }
    return 0;
}