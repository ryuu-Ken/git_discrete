#include<iostream>

using namespace std;

int isPrime(int n){
    for (int i =2; i < n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n1, n2;
    cout<<"Enter the range n1 and n2: "<<endl;
    cin>>n1>>n2;
    
    cout<<"The prime numbers are: ";
    for (int i=n1 ; i<=n2; i++){
        if(isPrime(i)){
            cout<<i<< " ";
        } 
    }    
    return 0;
}