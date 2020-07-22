#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n%4==0?n++:n--;
    cout<<n<<endl;
    return 0;
}