#include <string>
#include <iostream>
using namespace std;
const int maxn = 80;
int main(){
    string s;
    // 获取一行字符串
    getline(cin, s);
    int words_len[maxn]={0};
    int nums= 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=' '){
            words_len[nums]++;
        }else{
            nums++;
        }
    }
    int index = s.length();
    for(int i=nums;i>=0;i--){
        cout << s.substr(index-words_len[i], words_len[i]) << ' ';
        index -= words_len[i]+1;
    }
    cout << endl;
}