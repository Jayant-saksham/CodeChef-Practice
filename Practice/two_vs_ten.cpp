#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%5==0){
            int count=0;
            while(true){
                if(x%10==0){
                    cout<<count<<endl;
                    break;
                }
                else{
                x=x*2;
                count++;
                }
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}