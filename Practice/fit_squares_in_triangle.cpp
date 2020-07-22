// Squares - 2 x 2
// B values 
// 1 -> 0
// 2 -> 0
// 3 -> 0
// 4 -> 1
// 5 -> 1
// 6 -> 3
// 7 -> 3
// 8 -> 6
// 9 -> 6
// 10-> 10
// Number of square = (Total area of triangle - base) / area of square
// If B even, B=B. Else B=B-1
 
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b; 
        if(b==1 || b==2 || b==3){
            cout<<"0"<<endl;
        }
        else{
            if(b%2==0){
                int area=0.5*b*b;
                int res=(area-b)/4;
                cout<<res<<endl;
            }
            else{
                b-=1;
                int area=0.5*b*b;
                int res=(area-b)/4;
                cout<<res<<endl;

            }
        }

    }
    return 0;
}