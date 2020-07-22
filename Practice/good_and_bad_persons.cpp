#include<iostream>
using namespace std;
void output(string s, int n, int k){
    int lower_leters=0;
    int upper_letters=0;
    for(int i=0;i<s.length();i++){
        char ch=s.at(i);
        int p=int(ch);
        // for capital, ASCII 65 to 90
        // for small, ASCII 97 to 122
        if(p>=65 && p<=90){
            upper_letters++;
        }
        else{
            lower_leters++;
        }
    }
    if(lower_leters==upper_letters){
        if(k>=lower_leters){
            cout<<"both"<<endl;
        }
        else if(k<lower_leters){
            cout<<"none"<<endl;
        }
    }
    else if(lower_leters>upper_letters){
        if(k>=lower_leters){
            cout<<"both"<<endl;
        }
        else if(k<upper_letters){
            cout<<"none"<<endl;
        }
        else{
            cout<<"chef"<<endl;
        }
    }   
    else{
        if(k>=upper_letters){
            cout<<"both"<<endl;
        }
        else if(k<lower_leters){
            cout<<"none"<<endl;
        }
        else{
            cout<<"brother"<<endl;
        }
    } 
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;        // n - length   k - flips
        string s;
        cin>>n>>k;
        cin>>s;
        output(s,n,k);
    }
    return 0;
}   