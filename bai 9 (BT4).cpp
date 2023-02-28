#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b[100], c[100];
    for(int i=0; i<n; i++){
        cin>>b[i]>>c[i];
        }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]==b[j]||c[i]==c[j]) {cout<<"yes";
            return 0;}
        }
    }
    for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
    int t=abs(b[i]-b[j]);
    int q=abs(c[i]-c[j]);
    if(t==q){cout<<"yes";
            return 0;}
    }
    }
    cout<<"no";
return 0;
}
