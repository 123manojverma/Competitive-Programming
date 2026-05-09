#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n+2,vector<int>(m+2));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>>dp1(n+2,vector<int>(m+2));
    vector<vector<int>>dp2(n+2,vector<int>(m+2));
    vector<vector<int>>dp3(n+2,vector<int>(m+2));
    vector<vector<int>>dp4(n+2,vector<int>(m+2));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp1[i][j]=a[i][j]+max(dp1[i-1][j],dp1[i][j-1]);
        }
    }

    for(int i=n;i>0;i--){
        for(int j=m;j>0;j--){
            dp2[i][j]=a[i][j]+max(dp2[i+1][j],dp2[i][j+1]);
        }
    }

    for(int i=n;i>0;i--){
        for(int j=1;j<=m;j++){
            dp3[i][j]=a[i][j]+max(dp3[i+1][j],dp3[i][j-1]);
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=m;j>0;j--){
            dp4[i][j]=a[i][j]+max(dp4[i-1][j],dp4[i][j+1]);
        }
    }

    int ans=0;

    for(int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            int c1=dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1];
            int c2=dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j];
            ans=max({c1,c2,ans});
        }
    }
    cout<<ans;
}