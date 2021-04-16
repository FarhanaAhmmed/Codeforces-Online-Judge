#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int t,i,j,k,n,f=0;
    cin >> t;
    for(j=1; j<=t; j++)
    {
        cin >> n;
        for(i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        for(k=1; k<=n; k++){
            if(arr[k]!=arr[k+1])
            {
               if(k==1 && (arr[k+1]==arr[k+2])){
                    cout << k <<endl;
                    break;
                }
                else{
                cout << k+1 <<endl;
                break;
            }
          }
        }
    }

}
