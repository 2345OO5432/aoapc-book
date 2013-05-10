// UVa10252 Common Permutation
// Rujia Liu
// ���⣺
// ������Сд�ַ���a, b����һ������ַ���x��ʹ��x��ĳһ��������a�������У���һ������������x��ĳһ��������b�������У���һ��������
// �㷨��x�������ַ�Ӧ���ǰ�˳�����У�����ÿһ���ַ�ch���������a�г�����c1�Σ���b�г�����c2�Σ���ô�ڴ���Ӧ����min(c1,c2)��
// ע�������������п��У�Ӧ��fgets��������
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

// �ַ���s���ַ�ch���ֵĴ���
int count(const char* s, int ch) {
  int cnt = 0, n = strlen(s);
  for(int i = 0; i < n; i++)
    if(s[i] == ch) cnt++;
  return cnt;
}

const int maxn = 1000 + 10;
char a[maxn], b[maxn];

int main() {
  while(fgets(a, maxn, stdin) != NULL) {
    fgets(b, maxn, stdin);
    for(int ch = 'a'; ch <= 'z'; ch++) {
      int cnt = min(count(a, ch), count(b, ch));
      while(cnt--) printf("%c", ch);    
    }
    printf("\n");
  }
  return 0;
}
