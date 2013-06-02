// UVa10494 If We Were a Child Again
// Rujia Liu
// ���⣺�߾�������������32λ������
// ע�������32λ��������d�Ļ���d*10��һ�������

#include<iostream>
#include<string>
using namespace std;

// a/b = c, a%b = d
void divmod(const string& a, long long b, string& c, long long& d) {
  c = "";
  d = 0;
  for(int i = 0; i < a.length(); i++) {
    d = d*10 + a[i] - '0';
    if(c.length() > 0 || d / b != 0) // ����ǰ׺0
      c += (char)('0' + d / b);
    d %= b;
  }
  if(c == "") c = "0";
}

int main() {
  string a, c, op;
  long long b, d;
  while(cin >> a >> op >> b) {
    divmod(a, b, c, d);
    if(op[0] == '/') cout << c << "\n"; else cout << d << "\n";
  }
  return 0;
}
