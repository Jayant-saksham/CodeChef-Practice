#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int Limak=0,Bob=0;
        for(int i=1;;i++){
            if(i&1){
                if(Limak+i>a){
                    break;
                }         
                Limak+=i;       
            }
            else{
                if(Bob+i>b){
                    break;
                }
                Bob+=i;
            }
        }
        if(Limak<Bob){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Limak"<<endl;
        }
    }
    return 0;
}