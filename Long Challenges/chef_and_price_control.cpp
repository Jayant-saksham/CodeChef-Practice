#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        // Ceiling price - k (means i Pi > k, then selling price will be k)
        // Ceiling price is the maximum price. it will make CHef in loss in its business
        cin>>n>>k;
        int previous_amount=0;
        int new_amount=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            previous_amount+=x;
            if(x>k){
                x=k;
            } 
            new_amount+=x;
        }
        cout<<(previous_amount-new_amount)<<endl;
    }
    return 0;
}