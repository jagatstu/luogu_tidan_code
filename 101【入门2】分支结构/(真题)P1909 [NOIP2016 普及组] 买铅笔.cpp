#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
	int res = 0;
	int a,b;
	cin >> a >> b;
	res = (n+a-1) / a * b;
	cin >> a >> b;
	res = (n+a-1) / a * b > res ? res : (n+a-1) / a * b;
	cin >> a >> b;
	res = (n+a-1) / a * b > res ? res : (n+a-1) / a * b;
	cout << res << endl;
	return 0;
}
/*
  不用数组 结构体 的方式 去感受学过了这些知识以后的便利性。
 */