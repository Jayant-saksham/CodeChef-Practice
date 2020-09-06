#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // n - number of chefs
    // m - number of emails
    int n,m;
    cin>>n>>m;
    map<string,string> chef_country;
    map<string,int> country_vote;
    string chef,country;
    for(int i=0;i<n;i++){
        cin>>chef>>country;
        chef_country[chef]=country;
        
    }
    return 0;
}