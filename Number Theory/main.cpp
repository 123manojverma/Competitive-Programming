#include<bits/stdc++.h>
using namespace std;

long long binary(long long a,long long b,long long mod){
    if(b==0){
        return 1;
    }
    long long temp=binary(a,b/2,mod);
    temp*=temp;
    temp%=mod;
    if(b&1){
        temp*=a;
        temp%=mod;
    }
    return temp;
}

long long helper(long long a,long long b){
    long long res=1;
    while(b>0){
        if(b&1){
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}

int main(){

}