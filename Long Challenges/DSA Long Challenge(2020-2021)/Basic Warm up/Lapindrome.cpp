#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first[26]={0};
        int second[26]={0};
        int mid=s.length()/2;
        for(int i=0;i<mid;i++){
            char current=s[i];
            // current holds the ASCII value of current letter
            first[current-'a']++;
        }
        if(s.length()&1){
            mid+=1;
        }
        
        for(int i=mid;i<s.length();i++){
            char current=s[i];
            second[current-'a']++;
        }
        bool flag=false;
        for(int i=0;i<26;i++){
            if(first[i]!=second[i]){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}