// UVa113 Power of Cryptography
// Rujia Liu
// ����n��p����p��n�η����������֤Ϊ1~10^9������
// �㷨����Ŀ�����ķ�Χ��double֮�ڣ�ֱ���ÿ⺯���󼴿�
#include<cstdio>
#include<cmath>

int main() {
  double n, p;
  while(scanf("%lf%lf", &n, &p) == 2)
    printf("%.0lf\n", pow(p, 1 / n));  
  return 0;
}
