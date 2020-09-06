#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n], B[1000001]={0};
        // In B[], we will store index of last elements
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A[i]=x;
            B[x]=i;
        }
        for(int i=0;i<n;i++){
            int x=A[i];
            int last_index=B[x];
            cout<<(n-1-last_index)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Given array is sorted and non repeating elements
// for(int i=0;i<n;i++){
//     cout<<(n-1)<<" ";
// }

// When given array is sorted and elements are repeating
// then cout<<(last_index_with_given_digit-n);