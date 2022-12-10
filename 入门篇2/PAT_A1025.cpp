#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct student{
    char id[15];
    int location_number;
    int score;
    int local_rank;
}stu[30010];
bool cmp(student s1, student s2){
    if(s1.score != s2.score) return s1.score > s2.score;
    else{
        return strcmp(s1.id, s2.id)<0; // 若成绩相同按照学号从小到大排序，因此越小的排在越前
    }
}
int main(){
    int n,k,num=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &k); // 输入该考场的总人数
        for(int j=1;j<=k;j++){
            scanf("%s %d",stu[num].id, &stu[num].score);
            stu[num].location_number = i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);
        stu[num-k].local_rank=1;
        for(int j=num-k+1;j<num;j++){
            if(stu[j].score==stu[j-1].score){
                stu[j].local_rank = stu[j-1].local_rank;
            }else{
                stu[j].local_rank = j+1-(num-k);
            }
        }
    }
    printf("%d\n",num);
    sort(stu,stu+num,cmp);
    int r=1;
    for(int i=0;i<num;i++){
        if(i>0&&stu[i].score!=stu[i-1].score){
            r=i+1;
        }
        printf("%s ", stu[i].id);
        printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
    }
    
}



