#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll money=0;
        while(k>1){
            n--;k--;
            money+=2;
        }
        money+=pow(2,n);
        cout<<money<<endl;
    }
}