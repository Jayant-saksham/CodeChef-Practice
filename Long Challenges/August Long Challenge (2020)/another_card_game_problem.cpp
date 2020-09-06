#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int c,r;
        cin>>c>>r;
        int countC=0, countR=0;
        if(c%9==0){
            countC=c/9;
        }
        if(r%9==0){
            countR=r/9;
        }
        if(c%9!=0){
            countC=c/9;
            countC++;
        }
        if(r%9!=0){
            countR=r/9;
            countR++;
        }
        if(countR>countC){
            cout<<"0"<<" "<<countC<<endl;
        }
        if(countR==countC){
            cout<<"1"<<" "<<countR<<endl;
        }
        if(countR<countC){
            cout<<"1"<<" "<<countR<<endl;
        }
    }
    return 0;
}
// 0 - Chef wins
// 1 - Rick wins