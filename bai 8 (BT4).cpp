#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int n){
for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>i; j--){
            if(a[j]>a[j-1]) swap(a[j], a[j-1]);
        }
    }
}
bool kt(int a[], int b[], int n){
for(int i=0; i<n ;i++){
        if(a[i]<=b[i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    sort(a, n);
    sort(b, n);
    if(kt(a, b, n)) cout<<"yes";
    else cout<<"no";
return 0;
}
