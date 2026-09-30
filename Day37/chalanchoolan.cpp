#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>left(n , INT_MAX);
    vector<int>right(n , INT_MAX);
    left[0]=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>a[i-1]){
            left[i] = left[i-1]+1;
        }
    }
    
    right[n-1] = 0;
    for(int i=n-2; i>=0; i--){
        if(a[i]>a[i+1]){
            right[i] = right[i+1]+1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<min(left[i] , right[i])<<" ";
    }
    return 0;
}