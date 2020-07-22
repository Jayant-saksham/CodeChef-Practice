// #include<iostream>
// using namespace std;

// int LCM(int a,int b){
//     int i;
//     for(i=(a>b?a:b);i<=a*b;i+=(a>b?a:b)){
//         if(i%a==0 && i%b==0){
//             break;
//         }
//     }
//     return i;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         int lcm;
//         cin>>a>>b;
//         lcm=LCM(a,b);
//         cout<<(a*b)/lcm<<" "<<lcm<<endl;
//     }
//     return 0;
// }






// Better approach - Used inbuild function
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,gcd,lcm;
	    cin>>a>>b;
	    gcd=__gcd(a,b);
	    lcm=a*b/gcd;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}