#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x:a){
            cin>>x;
        }
        vector<int>dp(n,0);
        int sum=0;
        for(int i=0;i<n-1;i++){
            dp[i]=abs(a[i]-a[i+1]);
            sum+=dp[i];
        }
        int mn=sum;
        for(int i=0;i<n;i++){
            if(i==0){
                mn=min(mn,sum-dp[i]);
            }else if(i==n-1){
                mn=min(mn,sum-dp[i-1]);
            }else{
                mn=min(mn,sum-dp[i]-dp[i-1]+abs(a[i-1]-a[i+1]));
            }
        }
        cout<<mn<<endl;
    }
}