#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
	int flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
    return flag;
}

int main(){
	int t,x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y;
		z=1;
     	for(int i=0;;i++){
		   if(isPrime(x+y+z)){
		    cout<<z<<endl;
            break;
	     }
         else{
             z++;
            }
		}
	}
    return 0;
}