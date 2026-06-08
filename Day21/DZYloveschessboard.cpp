#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    char res[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='-'){
                res[i][j]='-';
            }else if(i%2==0){
                if(j%2==0){
                    res[i][j]='B';
                }else{
                    res[i][j]='W';
                }
            }else{
                if(j%2==0){
                    res[i][j]='W';
                }else{
                    res[i][j]='B';
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}