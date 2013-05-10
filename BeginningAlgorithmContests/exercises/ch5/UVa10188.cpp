// UVa10188 Automated Judge Script
// Rujia Liu
// ���⣺������׼�𰸺�ѡ��������ж�����ȷ(AC)������(WA)���Ǹ�ʽ��(PE)
// ������˵���Ȱ������кϲ���һ�������ȫ��ͬ����AC������������������ַ�����˳����ȫ��ȣ���PE������WA

#include<cstdio>
#include<cctype>
#include<string>
using namespace std;

const int maxn = 1000;
char line[maxn];
string output[2];

bool read_data(string& out) {
  out = "";
  fgets(line, maxn, stdin);
  int n;
  if(sscanf(line, "%d", &n) != 1 || n == 0) return false;
  for(int i = 0; i < n; i++) {
    fgets(line, maxn, stdin);
    out += line;
  }
  return true;
}

string digits(const string& s) {
  string ans;
  for(int i = 0; i < s.length(); i++)
    if(isdigit(s[i])) ans.push_back(s[i]);
  return ans;
}

int main() {
  int kase = 0;
  for(;;) {
    if(!read_data(output[0])) break;
    read_data(output[1]);
    printf("Run #%d: ", ++kase);
    if(output[0] == output[1]) printf("Accepted\n");
    else if(digits(output[0]) == digits(output[1])) printf("Presentation Error\n");
    else printf("Wrong Answer\n");
  }
  return 0;
}
