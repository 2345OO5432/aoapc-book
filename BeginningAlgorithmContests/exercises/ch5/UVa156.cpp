// UVa156 Ananagrams
// Rujia Liu
// ���⣺����һЩ���ʣ��ҳ������������������ĵ��ʣ��õ��ʲ���ͨ����ĸ���ŵõ������ı��е�����һ������
// �㷨����ÿ�����ʡ���׼��������ȫ��ת��ΪСд��ĸȻ������Ȼ��ŵ�map�н���ͳ��
#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

map<string,int> cnt;
vector<string> words;

// ������s���С���׼����
string repr(string s) {
  string ans = s;
  for(int i = 0; i < ans.length(); i++)
    ans[i] = tolower(ans[i]);
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  int n = 0;
  string s;
  while(cin >> s) {
    if(s[0] == '#') break;
    words.push_back(s);
    string r = repr(s);
    if(!cnt.count(r)) cnt[r] = 0;
    cnt[r]++;
  }
  vector<string> ans;
  for(int i = 0; i < words.size(); i++)
    if(cnt[repr(words[i])] == 1) ans.push_back(words[i]);
  sort(ans.begin(), ans.end());
  for(int i = 0; i < ans.size(); i++)
    cout << ans[i] << "\n";
  return 0;
}
