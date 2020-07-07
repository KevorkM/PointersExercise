#include <iostream>

using namespace std;

void Swap(int& x, int& y);

int main() {

	cout << "References - Writting a function that will swap values of 2 intergers\n" << endl;

	int x;
	int y;

	cout << "Please enter a value for x: " << endl;
	cin >> x;

	cout << "Please enter a value for y: " << endl;
	cin >> y;

	Swap(x, y);

	cout << "The new value of x is: " << x << endl;
	cout << "The new value of y is: " << y << endl;

	return 0;
}

//Swapping the values
void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}