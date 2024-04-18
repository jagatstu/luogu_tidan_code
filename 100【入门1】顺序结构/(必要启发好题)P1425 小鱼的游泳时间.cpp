#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int s1 = a*60 + b;
	int s2 = c*60 + d;
	int t = s2 - s1;
	
	int e = (t)/60;
	int f = t%60;
	cout << e << " " << f << endl; 
	return 0;
}
/*
采用分支结构做法和不采用分支结构的做法  启发性质很好。 
分支那就是硬算。
不采用分支那就是选择一个时间参考； 
*/