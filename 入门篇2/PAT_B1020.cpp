#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX_N = 1001;
struct moon_cake
{
    int sum=0; // 库存
    double price = 0.0; // 单价
};

bool cmp(moon_cake m1, moon_cake m2){
    if(m1.price != m2.price) return m1.price > m2.price;
    else{
        return m1.sum > m2.sum;
    }
}


int main(){
    int N=0, c=0;
    scanf("%d", &N);
    scanf("%d", &c);
    moon_cake all_inf[N];
    // 开始记录数据
    for(int i=0;i<N;i++){
        scanf("%d", &all_inf[i].sum);
    }
    int sum_ = 0;
    for(int i=0;i<N;i++){
        scanf("%d", &sum_);
        all_inf[i].price = (double)sum_ / all_inf[i].sum; // 这里值得注意，两个int相除，结果是int，所以需要强制转换
    }
    // 现在需要按照price对数组排序
    sort(all_inf, all_inf+N, cmp);
    // 输出信息
    for(int i=0;i<N;i++){
        printf("%d %f\n", all_inf[i].sum, all_inf[i].price);
    }


    double profit = 0.0;
    int ind = 0;
    while(c>0){
        if(c<=all_inf[ind].sum){
            profit += c * all_inf[ind].price;
            c = 0;
        }else{
            profit += all_inf[ind].price * all_inf[ind].sum;
            c -= all_inf[ind].sum;
            ind++;
        }
    }
    printf("%.2f", profit);
}