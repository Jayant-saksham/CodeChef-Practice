#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        // n- no of coins present on table
        // k - no of people came
        cin>>n>>k;
        int rem=0;
        for(int i=1;i<=k;i++){
            rem=max(rem,n%i);
        }
        cout<<rem<<endl;
    }
    return 0;
}