#include<iostream>
#define long long ll
using namespace std;
int sum_of_digits(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int sum=0,max=0;
        for(int i=0;i<(n-1);i++){
            int product=1;
            for(int j=i+1;j<n;j++){
                product=A[i]*A[j];
                sum=sum_of_digits(product);
                if(sum>max){
                    max=sum;
                }
                sum=0;

            }
        }
        cout<<max<<endl;

    }
    return 0;
}