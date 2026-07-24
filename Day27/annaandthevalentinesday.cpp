#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>trailingzeroes(n);
        int totaldigits=0;
        for(int i=0;i<n;i++){
            while(a[i]%10==0){
                trailingzeroes[i]++;
                a[i]/=10;
                totaldigits++;
            }
            while(a[i]>0){
                totaldigits++;
                a[i]/=10;
            }
        }
        sort(trailingzeroes.begin(),trailingzeroes.end(),greater<>());
        for(int i=0;i<n;i+=2){
            totaldigits-=trailingzeroes[i];
        }
        if(totaldigits>m){
            cout<<"Sasha"<<endl;
        }else{
            cout<<"Anna"<<endl;
        }
    }
}