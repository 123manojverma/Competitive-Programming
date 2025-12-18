#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>ans(0);
    string s1;
    int i=0;
    while(i<s.size()){
        if(s[i]!='+')
        ans.push_back(s[i]);
        i++;
    }
    sort(ans.begin(),ans.end());
    s1=ans[0];
    for(int i=1;i<ans.size();i++){
        s1+="+";
        s1+=ans[i];
    }
    cout<<s1;
}