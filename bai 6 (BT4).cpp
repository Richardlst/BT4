#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<=n-3; i++)
    {
        for(int j=i+1; j<=n-2; j++)
        {
            for(int q=j+1; q<=n-1; q++)
            {
                if(a[q]+a[i]+a[j]==0)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[q];
                    return 0;
                }
            }
        }
    }
    return 0;
}
