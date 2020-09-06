#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int frequence[26]={0};
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            int index=ch-'a';
            if(frequence[index]==0){
                frequence[index]++;
            }
            else{
                frequence[index]--;
            }
        }
        int flag=0;
        for(int i=0;i<26;i++){
            if(frequence[i]!=0){
                flag++;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}