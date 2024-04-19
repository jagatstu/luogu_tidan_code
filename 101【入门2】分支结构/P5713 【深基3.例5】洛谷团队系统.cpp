#include <iostream> 
using namespace std;

int main(){
	int x;
	cin >> x;
	if (x*5 <= 11 + x*3) cout << "Local\n";
	else cout << "Luogu\n";
	return 0;
}