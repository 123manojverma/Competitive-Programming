#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>w>>n;
    long sum=0;
    for(int i=1;i<=n;i++){
        sum+=k*i;
    }
    if(sum>w){
        cout<<sum-w<<endl;
    }else{
        cout<<0<<endl;
    }
}