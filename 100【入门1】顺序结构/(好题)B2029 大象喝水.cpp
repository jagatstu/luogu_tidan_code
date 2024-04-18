#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int h, r;
	cin >> h >> r;
	double v = 3.14*r*r*h;
	int n = ceil(20.0*1000 / v);
	cout << n << endl;
	return 0;
}