#include <iostream>
using namespace std;

int big(int a, int b,int c=100){
	int max = c;
	int big = a;
	if (big < b)
		big = b;
	if (big > max)
		big = max;
	return big;
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}