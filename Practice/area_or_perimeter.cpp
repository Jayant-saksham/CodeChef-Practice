#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
if(a*b>2*(a+b)){
 cout<<"Area"<<endl;   
 cout<<a*b<<endl;  
}
else if(a*b<2*(a+b)){
  cout<<"Peri"<<endl;   
  cout<<2*(a+b)<<endl;  
}
else{
   cout<<"Eq"<<endl; 
   cout<<a*b<<endl;  
}
    return 0;
}