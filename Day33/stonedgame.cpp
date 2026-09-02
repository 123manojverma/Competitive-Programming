#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0,maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            maxi=max(maxi,a[i]);
        }
        if(maxi>(sum-maxi) || sum%2!=0){
            cout<<"T"<<endl;
        }else{
            cout<<"HL"<<endl;
        }
    }
}