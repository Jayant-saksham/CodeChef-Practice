#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // x -Girl and y - Boy
        int n=s.size();
        int maximum_pair=0;
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1] && (i+1)<n){
                maximum_pair++;
                i++;
            }
        }
        cout<<maximum_pair<<endl;
    }
    return 0;
}