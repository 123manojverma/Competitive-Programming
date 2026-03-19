#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int i=0;
        for(i=0;i<n;i++){
            if(c[i]=='L'){
                break;
            }
        }
        cout<<i+1<<endl;
    }
}