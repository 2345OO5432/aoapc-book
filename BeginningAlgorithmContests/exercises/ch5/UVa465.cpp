// UVa465 Overflow
// Rujia Liu
// ���⣺���������Ǹ�����a, b���ж�a, b, a+b����a*b�Ƿ����
// �㷨��ֱ����Ϊdouble����
#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

const double BIG = 2147483647; // 2^31-1

int main() {
  string s, op;
  while(getline(cin, s)) {
    stringstream ss(s);
    double a, b;
    ss >> a >> op >> b;
    double result = (op[0] == '+' ? a + b : a * b);
    cout << s << "\n";
    if(a > BIG) cout << "first number too big\n";
    if(b > BIG) cout << "second number too big\n";
    if(result > BIG) cout << "result too big\n";
  }
  return 0;
}
