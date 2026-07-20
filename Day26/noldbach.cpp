#include<bits/stdc++.h>
using namespace std;

bool isPrime(int i){
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,k,t=0;
    cin>>n>>k;
    vector<int>prime;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            prime.push_back(i);
        }       
    }

    for(int i=13;i<=n;i++){
        for(int j=1;j<prime.size();j++){
            int sum=prime[j]+prime[j-1]+1;
            if(sum>i){
                break;
            }else if(sum==i && isPrime(sum)){
                t++;  
                break;
            }
        }
    }

    if(t>=k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}