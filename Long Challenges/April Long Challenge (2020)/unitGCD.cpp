// Number of days = n//2
// Because evens will never come at same pair. aa gaye sath to co prime nahi honge

#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
        }
        else{
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                // First day
                if(i==0){
                    if(n==2){
                        cout<<2<<" "<<1<<" "<<2;
                    }
                    else{
                        cout<<3<<" "<<1<<" "<<2<<" "<<3;
                    }
                }
                else{
                    int even=2*(i+1);
                    if(even+1<=n){
                        cout<<2<<" "<<even<<" "<<even+1;
                    }
                    else{
                        cout<<1<<" "<<even;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}