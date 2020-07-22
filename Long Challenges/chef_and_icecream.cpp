#include <iostream>
using namespace std;
int main(){
    int T; 
    cin>>T;
    while(T--){
        int n; cin>>n;
        int a[3]= {0,0,0};  // 5 10 15 (Initial all zero)
        int check=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;

            // Main working logic
            if(x==5){
                a[0]+=1;
            }
            else if(x==10){
                if(a[0]>=1){
                    a[1]+=1;
                    a[0]-=1;
                }
                else{
                    check++;
                }
            }
            else{
                if(a[1]>=1){
                    a[2]+=1;
                    a[1]-=1;
                }
                else if(a[0]>=2){
                    a[2]+=1;
                    a[0]-=2;
                }
                else{
                    check++;
                }
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}