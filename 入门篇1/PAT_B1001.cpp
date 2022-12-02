#include <iostream>
using namespace std;
// 卡拉兹猜想
int main()
{
    int n = 0;
    cout << "请输入一个不超过1000的正整数：" << endl;
    while(cin>>n){
        if(n > 1000 || n < 0){
            cout << "输入数据不符合要求，请重新输入" << endl;
        }else{
            break;
        }
    }
    int step = 0;
    while(n>1){
        if(n%2==0){
            n = n / 2;
        }else{
            n = (3*n+1)/2;
        }
        step++;
    }
    cout << step << endl;
}