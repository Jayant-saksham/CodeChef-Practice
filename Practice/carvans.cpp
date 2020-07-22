// Two cases
// Speed of car aheah >= speed of our car
// Our car at max
// Spped of car ahead < Sppe of our car
// Our car at ahead speed
// WARNING! The input files are very large. Use faster I/O.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // Above statement is used to get the input very fast. It enables fast IO
    int t;
    cin>>t;
    while(t--){
        int n,A[n];
        // n -Number of cars
        // maxi[n] - Maximum speed of cars
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int count=1;
        int speed_of_prev_car=A[0];
        for(int i=0;i<n;i++){
            if(speed_of_prev_car>=A[i]){
                count++;
                speed_of_prev_car=A[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}















// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	    }
// 	    int count=1;
// 	    for(int i=0;i<n-1;i++)
// 	    {   
// 	        if(a[i+1]>a[i]){
//     			a[i+1]=a[i];
//     		}
// 	        else
// 	            count++;
// 	    }
// 	    cout<<count<<endl;
// 	}
// 	return 0;
// }