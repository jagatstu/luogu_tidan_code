#include <iostream>
#include <cstdio>
using namespace std;

int arr[12], h, cnt=0;
int main(){
	for (int i=1; i<=10; i++) cin >> arr[i];
	cin >> h;
	h += 30;
	for (int i=1; i<=10; i++){
		if (arr[i]<=h) cnt++;
	}
	cout << cnt;
	return 0;
}

//int cnt, res, t, n;
//int main(){
//	cin >> t 
//	return 0;
//}
/*
  假设没学数组，不用数组的。会不太方便。
  没学循环也不会循环这个题能解答吗？
  答：
  都可以，但是真的很不方便，可以十个变量来存苹果高度。
 */