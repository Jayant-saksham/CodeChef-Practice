// Impressing girls (Ladki patao sawal)
#include<iostream>
using namespace std;
void maximum_girls_patao(int n,int k,int A[]){
    int maximum=0;
    for(int i=0;i<=(n-k);i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=A[j];
        }
        if(maximum<sum){
            maximum=sum;
        }
    }
    cout<<maximum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // n -length of track
        // k -length of the track he can run at max
        int A[n];   // Number of girls per km
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        maximum_girls_patao(n,k,A);
    }
    return 0;
}
