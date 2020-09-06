#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; 
    cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int colours[3] = {0,0,0}; //R,G,B
	    for(int i=0;i<n;i++){
	        if(s[i] == 'R'){
	            colours[0]++;
            }
	        if(s[i] == 'G'){
	            colours[1]++;
            }
	        if(s[i] == 'B'){
	            colours[2]++;
            }
	    }
	    sort(colours, colours+3);
	    cout<<colours[0]+colours[1]<<"\n";
	}
	return 0;
}