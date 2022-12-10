#include <cstdio>
#include <iostream>
using namespace std;
// 将26进制转为10进制
int hashFunc(char S[], int len){
    int id = 0;
    for(int i=0;i<len;i++){
        id += id*26 + (S[i]-'A');
    }
    return id;
}
int hashTable[26*26*26+10];
const int maxn = 100;
char S[maxn][5];
char temp[5];
int main(){
    int N=0;
    scanf("%d", &N);
    string s;
    for(int i=0;i<N;i++){
        scanf("%s", S[i]);
        int x = hashFunc(S[i], 3);
        hashTable[x]++;
    }
    int M=0;
    scanf("%d", &M);
    for(int i=0;i<M;i++){
        scanf("%s", temp);
        int id = hashFunc(temp, 3);
        printf("%d\n", hashTable[id]);
    }
    return 0;
}
