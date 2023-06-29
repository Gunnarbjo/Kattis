#include<bits/stdc++.h>
using namespace std;

// program to take in the word hey and increasing the number of e by 2 times the number of original e's
int main(){
    string s,t="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='e'){
            t+="ee";
        }
        else t+=s[i];
    }
    cout<<t;
}