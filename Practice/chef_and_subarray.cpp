#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int A[n], product, sum;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        // Kyuki individual bhi le raha hai hum
        int count=n;
        for(int i=0;i<(n-1);i++){
            sum=A[i];
            product=A[i];
            for(int j=i+1;j<n;j++){
                sum=sum+A[j];
                product=product*A[j];
                if(sum==product){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}