// Method to find all the prime numbers, smaller than or equal to n. Fastest way to find prime number
#include<iostream>
using namespace std;

// Native approach
bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i*i<n;i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}

// Sieve approach
void prime_sieve(int *A){
    // Skip all even numbers
    for(int i=3;i<=10000;i++){
        A[i]=1;
    }
    // Sieve
    for(int i=3;i<=10000;i+=2){
        // If the current number is not markets, it is prime
        if(A[i]==1){
            // Marks all mulitple of i as not prime
            for(int j=i*i;i<=10000;j+=i){
                A[j]=0;
            }
        }
    }
    // Special cases
    A[2]=1;
    A[1]=A[0]=0;

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int A[10000]={0};
    prime_sieve(A);
    // Printing the primes
    for(int i=0;i<=n;i++){
        if(A[i]==1){
            cout<<i<<" ";
        }
    }    
    return 0;
}