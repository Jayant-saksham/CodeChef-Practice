#include<iostream>
using namespace std;
void check_palindrome(int n){
    int rev=0, temp=n;
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(rev==n){
        cout<<"wins"<<endl;
    }
    else{
        cout<<"loses"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        check_palindrome(n);
    }
    return 0;
}