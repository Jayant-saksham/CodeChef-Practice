#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int quantity,price;
        cin>>quantity>>price;
        double total_expense;
        total_expense=quantity*price;
        if(quantity>1000){
            total_expense=0.9*total_expense;
        }
        cout<<fixed<<setprecision(6)<<total_expense<<endl;

    }
    return 0;
}