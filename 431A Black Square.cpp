#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r=0,i,a,b,c,d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            r=r+a;
        }
        if(s[i]=='2'){
            r=r+b;
        }
        if(s[i]=='3'){
            r=r+c;
        }
        if(s[i]=='4'){
            r=r+d;
        }
    }
    cout << r;
}
