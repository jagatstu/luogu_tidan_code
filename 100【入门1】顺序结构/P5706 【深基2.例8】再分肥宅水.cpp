#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a;
	int b;
	cin>>a>>b;
	cout<<setprecision(3)<<fixed<<a/b<<endl<<b*2;
	return 0;
}