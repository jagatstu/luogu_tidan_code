#include <iostream> 
#include <iomanip>
using namespace std;

double m, h, bmi;

int main () {
	cin >> m >> h;
	bmi = m / (h * h); // 根据题意计算
	// 开始比大小
	if (bmi < 18.5) cout << "Underweight" << endl;
	if (bmi >= 18.5 && bmi < 24)
		cout << "Normal";
	if (bmi >= 24)
		cout << setprecision(6)<< bmi << endl << "Overweight" << endl;
	return 0;
}
