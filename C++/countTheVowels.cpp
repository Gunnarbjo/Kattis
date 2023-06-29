#include<bits/stdc++.h>
using namespace std;

char changeCase(char c){
    if(isupper(c)) return tolower(c);
    return c;
}

int main(){
    string s;
    char vowels[]={'a','e','i','o','u'};
    int cnt=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char u = changeCase(s[i]);
        for(int j=0;j<5;j++){
            if(u==vowels[j]){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<"\n";
}