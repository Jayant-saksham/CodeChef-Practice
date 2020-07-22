#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    vector <int> V;
    while(n--){
        cin>>num;
        V.push_back(num);
    }
    sort(V.begin(), V.end());
    for(int i=0;i<V.size();i++){
        cout<<V.at(i)<<endl;
    }
    return 0;
}

// Time of sort() function - nlogn 
