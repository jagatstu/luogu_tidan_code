#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	if (a>b) swap(a,b);
	if (b>c) swap(b,c);
	if (a>b) swap(a,b);
	int g = __gcd(a, c);
	printf("%lld/%lld", a/g,c/g);
	return 0;
}
/*
	勾股玄
	a b c;

  不用循环的，约分的过程就没啥好办法了。自己动手实现找最大公约数的方式也要循环
  所以坚持不用循环的话就用算法头。
 */