#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int max_area_tablet=0;
        for(int i=0;i<n;i++){
            int width, height, price;
            cin>>width>>height>>price;
            if(price<=b){
                max_area_tablet=max(max_area_tablet, (width*height));
            }
        }
        if(max_area_tablet==0){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<max_area_tablet<<endl;
        }
    }
    return 0;
}