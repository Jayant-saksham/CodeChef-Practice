// Concept - Number of points on each x and y cordinate must be even for forming a rectangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<pair<int,int>> V;
    while(t--){
        // n - number of rectagles
        int n;
        cin>>n;
        map<int,int>x,y;
        int a,b;
        x.clear();
        y.clear();
        for(int i=0;i<(4*n-1);i++){
            cin>>a>>b;
            x[a]++;
            y[b]++;
        }
        for(auto i=x.begin();i!=x.end();i++){
            if((i->second)%2){
                a=i->first;
                break;
            }
        }
        for(auto i=y.begin();i!=y.end();i++){
            if((i->second)%2){
                b=i->first;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;

    }
    return 0;
}