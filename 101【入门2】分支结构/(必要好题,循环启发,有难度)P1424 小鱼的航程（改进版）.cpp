#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int x, n;
	scanf("%d%d", &x, &n);
	// int day = n/7*5 + ((6-x)>=0 ? 6-x : 0); // error:7 10
	int day = (n / 7) * 5;
	if (n%7>(7-x) && x>6 ){
		day += n%7 - 1;
	}else if (n%7>(7-x)){ // 剩下天数往后数要超过本周末。
		day += n%7 - 2;
	}else{
		day += n%7;
	}
	long long res = 250 * day;
	printf("%lld", res);
	return 0;
}
/*
  不用循环语句的解法会有些费劲，但是正是因为这样可以启发循环 
 */