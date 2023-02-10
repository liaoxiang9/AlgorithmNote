#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX_N = 110;
struct interval
{
   int x; // 左端点
   int y; // 右端点
}I[MAX_N];
bool cmp(interval i1, interval i2){
    if(i1.x != i2.x) return i1.x > i2.x;
    else return i1.y < i2.y;
}

// 区间贪心算法
// 核心思路：每次选择左端点最大的区间
// 原因：每次选取左端点最大的区间，可以保证其他区间的右端点都尽可能小于这个区间的左端点
// 从而尽可能保证区间不重叠
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &I[i].x, &I[i].y);
    }
    sort(I, I+n, cmp);
    
    int last_x = I[0].x;
    int ans = 1;
    printf("%d %d\n", I[0].x, I[0].y);
    for(int i=1;i<n;i++){
        if(I[i].y <= last_x){
            ans++;
            last_x = I[i].x;
            printf("%d %d\n", I[i].x, I[i].y);
        }
    }
    printf("%d\n", ans);
}
