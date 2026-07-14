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
        int val=1;
        int max=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(a[i]>val){
                max+=a[i]-val;
            }else{
                if(val-a[i]>max){
                    flag=false;
                    break;
                }else{
                    max=max-(val-a[i]);
                }
            }
            val++;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}