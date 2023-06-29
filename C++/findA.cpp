#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||flag==1){
            cout<<s[i];
            flag=1;
        }
    }
    cout<<"\n";
}