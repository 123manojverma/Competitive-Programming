#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int i=0,j=n-1;
        bool flag=true;
        while(i<j){
            while(p[i]==i+1)i++;
            while(p[j]==j+1)j--;

            if(i>=j)break;

            if(p[i]!=i+1 && p[j]!=j+1 && p[i]==j+1 && p[j]==i+1){
                i++;j--;
            }else{
                flag=false;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;        
    }
}