#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='s'){
            cnt++;
        }
        else cnt=0;
        if(cnt==2){ 
            cout<<"hiss\n";
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"no hiss\n";

}