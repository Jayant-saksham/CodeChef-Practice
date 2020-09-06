#include <bits/stdc++.h>
using namespace std;
int main(){
      long long int t;
      cin>>t;
      long long int arr[t];
      for(int i=0; i<t; i++){
            cin>>arr[i];
      }
      sort(arr, arr+t);
      long long int ans = 0;
      for(int j=0; j<t; j++){
            ans = max(ans, (t-j)*arr[j]);
      }
      cout<<ans<<"\n";
      return 0;
}
