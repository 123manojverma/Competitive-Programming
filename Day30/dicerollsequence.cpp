#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1] || a[i]==7-a[i+1]){
                cnt++;
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}