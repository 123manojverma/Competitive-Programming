#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(k+1==n){
            cout<<-1<<endl;
        }else{
            int j=0;
            for(int i=0;i<=k/2;i++){
                cout<<'0';
                j++;
            }
            
            for(int i=k/2;i<=k;i++){
                cout<<'1';
                j++;
            }
            
            char prev='0';
            for(int i=j;i<n;i++){
                cout<<prev;
                prev=prev=='1'?'0':'1';
            }
            cout<<endl;
        }
    }
    
}