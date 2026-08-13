#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>p(n),q(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int i=0;
    for(i=0;i<n;i++){
        if(p[i]<q[i])break;
        if(p[i]>q[i]){
            cout<<0<<endl;
            return 0;
        }
    }

    if(i==n){
        cout<<0<<endl;
        return 0;
    }

    int cnt=0;
    next_permutation(p.begin(),p.end());
    while(p!=q){
        cnt++;
        next_permutation(p.begin(),p.end());
    }
    cout<<cnt<<endl;
}