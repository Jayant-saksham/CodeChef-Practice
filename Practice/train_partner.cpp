// Side upper - 8,16,24 -> divisible by 8.
// Side upper ka padosi - 8-1, 16-1, 24-1 which is side lower
// Side lower -> 7,15,23,31,39, which is n%8==7
// Side lower ka padosi -> n+1
// Lower birth -> n%8==1, hence uska padosi -> n+3
// Lower birth ->n%8==4, padosi ->n-3
// Middle birtth -> n%8==2, padosi = n+3
// Middle birth -> n%8==5, padosi = n-3
// Upper birth -> n%8==3, padosi = n+3


#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%8==0){
            cout<<n-1<<"SL"<<endl;
            }
        else if(n%8==7){
            cout<<n+1<<"SU"<<endl;
            }
        else if(n%8==1){
            cout<<n+3<<"LB"<<endl;
            }
        else if(n%8==4){
            cout<<n-3<<"LB"<<endl;
            }
        else if(n%8==2){
            cout<<n+3<<"MB"<<endl;
            }
        else if(n%8==5){
            cout<<n-3<<"MB"<<endl;
            }
        else if(n%8==3){
            cout<<n+3<<"UB"<<endl;
            }
        else if(n%8==6){
            cout<<n-3<<"UB"<<endl;
            }
    }
    return 0;
}