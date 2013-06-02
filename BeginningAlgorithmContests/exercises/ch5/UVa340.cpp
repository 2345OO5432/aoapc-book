// UVa340 Master-Mind Hints
// Rujia Liu
// ���⣺ʵ��һ�����䡰�����֡���Ϸ�����������к��û��µ����У�ͳ���ж�������λ����ȷ��A�����ж����������������ж����ֹ���λ�ò��ԣ�B��
// �㷨��ֱ��ͳ�ƿɵ�A��Ϊ����B������ÿ�����֣�1~9����ͳ���ڶ��߳��ֵĴ���c1��c2����min(c1,c2)���Ǹ����ֶ�B�Ĺ��ס����Ҫ��ȥA�Ĳ���
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 1000 + 10;

int main() {
  int n, a[maxn], b[maxn];
  int kase = 0;
  while(scanf("%d", &n) == 1 && n) {
    printf("Game %d:\n", ++kase);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(;;) {
      int A = 0, B = 0;
      for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        if(a[i] == b[i]) A++;
      }
      if(b[0] == 0) break;
      for(int d = 1; d <= 9; d++) {
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++) {
          if(a[i] == d) c1++;
          if(b[i] == d) c2++;
        }
        B += min(c1, c2);
      }
      printf("    (%d,%d)\n", A, B-A);
    }
  }
  return 0;
}
