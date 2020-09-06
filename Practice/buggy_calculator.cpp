#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    stack <int> s;
	    long long int a,b;
	    cin>>a>>b;
	    int d1,d2;
	    while(a!=0||b!=0){
	        d1=a%10;
	        d2=b%10;
	        s.push((d1+d2)%10);
	        a=a/10;
	        b=b/10;
	    }
	    long long int num=s.top();
	    s.pop();
	    while(s.empty()!=1)
	    {
	        num=num*10+s.top();
	        s.pop();
	    }
	    cout<<num<<endl;
	}
	return 0;
}
