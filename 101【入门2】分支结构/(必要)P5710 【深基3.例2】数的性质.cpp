#include <iostream> 
using namespace std;

int main(){
	int x;
	cin >> x;
	bool is_even = x%2==0 ? 1 : 0;  // x%2==0  ==> (x&1)
	bool in4_12 = (x>4 && x<=12) ? 1 : 0;
	printf("%d %d %d %d", is_even&&in4_12, is_even||in4_12, (is_even&&(!in4_12))||((!is_even)&&in4_12),(!is_even)&&(!in4_12));
	return 0;
}