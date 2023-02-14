#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



vector<int> get_numbers(int x){
    vector<int> target(4);
    int ind = 0;
    while(x!= 0){
        target[ind++] = x % 10;
        x /= 10;
    }
    return target;
}

int get_result(const vector<int> &target){
    int sum = 0;
    int cof = 1;
    for(int i=target.size()-1;i>=0;i--){
        sum += cof * target[i];
        cof *= 10;
    }
    return sum;
}

int get_increase_number(int a){
    vector<int> target = get_numbers(a);
    sort(target.begin(), target.end(), [](int a, int b)->bool{return a > b;});
    return get_result(target);
}

int get_decrease_number(int a){
    vector<int> target = get_numbers(a);
    sort(target.begin(), target.end(), [](int a, int b)->bool{return a < b;});
    return get_result(target);
}



int main(){
    int a=-1;
    cin >> a;
    int pre = 0;
    while(pre != a && a !=0){
        pre = a;
        int inc = get_increase_number(a);
        int dec = get_decrease_number(a);
        a = inc - dec;
        cout << inc << " - " << dec << " = " << a << endl;
    }
}