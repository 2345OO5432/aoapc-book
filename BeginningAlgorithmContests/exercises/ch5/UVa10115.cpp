// UVa10115 Automatic Editing
// Rujia Liu
// ���⣺����n���滻��ÿ���滻�������ַ���s1, s2��ʾ����ռһ�У�s2����Ϊ�մ��������ѵ�һ��������s1�滻Ϊs2������滻�ɹ���ô���滻һ�Σ�ֱ��
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
const int maxn = 20;
string s1[maxn], s2[maxn], s;

int main() {
  while(getline(cin, s)) {
    int n;
    sscanf(s.c_str(), "%d", &n);
    if(!n) break;
    for(int i = 0; i < n; i++) {
      getline(cin, s1[i]);
      getline(cin, s2[i]);
    }
    getline(cin, s);
    for(int i = 0; i < n; i++) {
      for(;;) {
        int p = s.find(s1[i]);
        if(p < 0) break;
        s = s.substr(0, p) + s2[i] + s.substr(p + s1[i].length());
      }
    }
    cout << s << "\n";
  }
  return 0;
}
