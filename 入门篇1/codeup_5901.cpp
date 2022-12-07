#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int maxn = 256;
int main(){
    string s;
    cin >> s ;
    int len = s.length();
    bool flag = true;
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout << s<<"是回文"<<endl;
    }else{
        cout << s<<"不是回文"<<endl;
    }
}