#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                swap(s[i],s[i+1]);
            }
        }
        else{
            for(int i=0;i<(n-1);i+=2){
                swap(s[i],s[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            int index=s[i]-'a';
            int req=25-index;
            req+='a';
            char y=(char)req;
            cout<<y;
        }
        cout<<endl;

    }
    return 0;
}