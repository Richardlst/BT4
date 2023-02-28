#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(auto char1 : s){
        for(auto char2 : s){
            string word="";
            word= string(1,char1) + char2;
            cout<<word<<endl;
        }
    }
    for(auto char1:s){
        for(auto char2:s){
            for(auto char3:s){
            string word="";
            word= string(1, char1) + char2+char3;
            cout<<word<<endl;
        }
    }
    }
return 0;
}
