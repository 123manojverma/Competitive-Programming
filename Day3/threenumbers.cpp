#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,s;
    cin>>k>>s;
    int sum=0,p=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            sum=(s-(i+j));
            if(sum>=0 && sum<=k){
                p++;
            }
        }
    }
    cout<<p;
}
