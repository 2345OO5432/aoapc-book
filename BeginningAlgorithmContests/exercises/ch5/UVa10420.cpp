// UVa10420 List of Conquests
// Rujia Liu
// ���⣺����n�У�ÿ��Ϊһ����������һ��������Ҫ��ͳ��ÿ�����ҵ������������������ֵ������

#include<cstdio>
#include<string>
#include<map>
using namespace std;

const int maxn = 100;
char line[maxn], country[maxn];
map<string,int> cnt;

int main() {
  int n;
  scanf("%d\n", &n);
  while(n--) {
    fgets(line, maxn, stdin);
    sscanf(line, "%s", country);
    string c = country;
    if(!cnt.count(c)) cnt[c] = 0;
    cnt[c]++;
  }
  for(map<string,int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
    printf("%s %d\n", it->first.c_str(), it->second);
  }
  return 0;
}
