#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int s,v;
	cin >> s >> v;
	// 用函数向上取整固然很好 ceil 
	// 这里提供一种不用函数实现旳方式 up(A/B) = (A+B-1)/B 
	// 思考（只适用于整数） 
//	int t = 10 + (s+v-1)/v; 
//	int H = 8 - (t+60-1)/60;
//	int M = 60 - t%60;
//	printf("%02d:%02d", H,M);
	
	int t = 10 + (s+v-1)/v; 
	int H = ((8 - (t+60-1)/60) + 24) % 24;
	int M = ( (60 - t%60) + 60) % 60;
	printf("%02d:%02d", H,M);
	return 0;
}
