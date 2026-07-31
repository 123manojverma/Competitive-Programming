#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    vector<bool>prime(n+1,1);
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=6;i<=n;i++){
        int occ=0;
        for(int j=2;j<=i;j++){
            if(prime[j] && i%j==0){
                occ++;
            }
        }
        if(occ==2){
            cnt++;
        }
    }
    cout<<cnt;
}