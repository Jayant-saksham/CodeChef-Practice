#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int Dhealth, Cpower;
        cin>>Dhealth>>Cpower;
        for(int i=0;;i++){
            if(Dhealth==0 || Dhealth<=Cpower){
                cout<<"1"<<endl;
                break;
            }
            else if(Dhealth>0 && Cpower>0){
                Dhealth-=Cpower;
                Cpower/=2;                
            }
            else if(Cpower==0){
                cout<<"0"<<endl;
                break;
            }
        }
    }
    return 0;
}