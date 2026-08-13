#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        int j = i - 1, k = i + 1;
        bool flag = true;
        while (j >= 0 && k < n)
        {
            if (s[j] == s[k])
            {
                j--;
                k++;
            }
            else if (flag)
            {
                flag = false;
                j--;
                k++;
            }
            else
            {
                break;
            }
            cnt++;
        }

        if (i + 1 < n)
        {
            cnt++;
            j = i - 1;
            k = i + 2;
            flag = true;
            if(s[i]!=s[i+1]){
                flag=false;
            }
            while (j >= 0 && k < n)
            {
                if (s[j] == s[k])
                {
                    j--;
                    k++;
                }
                else if (flag)
                {
                    flag = false;
                    j--;
                    k++;
                }
                else
                {
                    break;
                }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}