#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    // 遍历字符串
    int countP[s.length()]={0};
    for(int i=1;i<s.length();i++){
        // 如果左边的字符是P，则说明当前字符左边总共有countP[i-1]+1个P
        if(s[i-1]=='P'){
            countP[i] = countP[i-1]+1;
        }else{
            countP[i] = countP[i-1];
        }
    }
    int countT[s.length()] = {0};
        for(int i=s.length()-2;i>=0;i--){
        // 如果右边的字符是T，则说明当前字符右边总共有countT[i+1]+1个P
        if(s[i+1]=='T'){
            countT[i] = countT[i+1]+1;
        }else{
            countT[i] = countT[i+1];
        }
    }
    int sum = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'A'){
            sum += countP[i] * countT[i];
        }
    }

    // printf("%s中共有%d个PAT",s,sum);
    cout << s << "中共有" << sum << "个PAT" << endl;
}
