#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,g;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){ 
	        cin >> arr[i];
	       if(i==0){
	         g=arr[i];
           }
	       else{
	          g=__gcd(g,arr[i]);
           }
	    }
	    for(int i=0;i<n;i++){
	        cout << arr[i]/g<<" ";
        }
	    cout<<endl;
	}
	return 0;
}