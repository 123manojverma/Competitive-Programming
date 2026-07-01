#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int a=-1,b=-1,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(a==-1){
                a=i;
                cnt1=1;
            }else if(arr[a]==arr[i]){
                cnt1++;
            }else if(b==-1){
                b=i;
                cnt2=1;
            }else if(arr[b]==arr[i]){
                cnt2++;
            }
        }
        if(cnt1==1){
            cout<<a+1<<endl;
        }else{
            cout<<b+1<<endl;
        }
    }
}