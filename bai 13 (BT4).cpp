#include<bits/stdc++.h>
using namespace std;
bool ktr(int *a, int n){

for(int i=0; i<n; i++){
        int t1=0, t2=0;
    for(int j=0; j<i; j++) t1+=a[j];
    for(int q=i+1; q<n; q++) t2+=a[q];
    if(t1==t2) return true;
    else continue;}
    return false;

}
int main(){
    int t;
    int *a=new int[10005];
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++) cin>>a[j];
        if(ktr(a, n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    delete []a;
return 0;
}
