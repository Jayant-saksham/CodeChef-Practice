#include<iostream>
using namespace std;
int main()
{
    int money_withdraw;
    float initial_money;
    float bank_charge=0.5;    // for each transaction
    cin>>money_withdraw;
    cin>>initial_money;
    float rem_money;

    if(money_withdraw%5==0){
        if(money_withdraw<initial_money && money_withdraw+0.5<=initial_money){
            rem_money=initial_money-money_withdraw-0.5;
            cout<<rem_money<<endl;        
            }
            else{
                cout<<initial_money<<endl;
            }                    
    }
    else{
        cout<<initial_money<<endl;
    }
    return 0;
}