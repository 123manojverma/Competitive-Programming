#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0,maxi=0,one=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt++;
        }else{
            one++;
            cnt--;
        }
        if(cnt<0){
            cnt=0;
        }
        maxi=max(cnt,maxi);
    }
    if(maxi==0){
        if(n==1){
            cout<<0<<endl;
        }else{
            cout<<n-1<<endl;
        }
    }else{
        cout<<maxi+one<<endl;
    }
}