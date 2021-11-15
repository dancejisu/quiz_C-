#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color() { r = g = b = 0; }
	Color(int r, int g, int b) {
		this->r = r; this->g = g; this->b = b;
	}
	void show() { cout << r << ' ' << g << ' ' << b << endl; }
	friend Color operator +(Color op1, Color op2);
	friend bool operator==(Color op1, Color op2);
};
Color operator+(Color a, Color b) {
	Color c;
	c.r = a.r + b.r;
	c.g = a.g + b.g;
	c.b = a.b + b.b;
	return c;
}
bool operator==(Color a, Color b) {
	if (a.r == b.r && a.b == b.b)
		return true;
	return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 0);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}