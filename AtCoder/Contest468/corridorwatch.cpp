#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,d;
    cin>>m>>d;
    string s;
    cin>>s;
    int cnt=0;
    vector<int>dist(m+1,0);
    for(int i=0;i<m;i++){
        if(s[i]=='G'){
            if(i-d<0){
                dist[0]+=1;
            }else{
                dist[i-d]+=1;
            }
            if(i+d+1>m){
                dist[m]-=1;
            }else{
                dist[i+d+1]-=1;
            }
        }
    }
    for(int i=1;i<=m;i++){
        dist[i]+=dist[i-1];
    }
    for(int i=0;i<m;i++){
        if(dist[i]==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}