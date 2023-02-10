#include <cstdio>
#include <algorithm>
using namespace std;

struct number{
    int value;
    int id;
};

bool cmp(number n1, number n2){
    if(n1.value != n2.value){
        return n1.value < n2.value;
    }else{
        return n1.id < n2.id;
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    number a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i].value);
        a[i].id = i;
    }
    sort(a, a+n, cmp);
    // 开始二分查找
    int mid; 
    int low = 0;
    int high = n;
    int target = 0;
    scanf("%d", &target);
    bool flag = true;
    while(flag){
        mid = low + (high - low) / 2;
        if(low > high){
            printf("%s\n", "not found");
            break;
        }else{
            if(target < a[mid].value){
                high = mid - 1;
            }else if(target > a[mid].value){
                low = mid + 1;
            }else{
                flag = false;
                printf("found!, it is the %dth number", a[mid].id+1);
            }
        }
    }
}