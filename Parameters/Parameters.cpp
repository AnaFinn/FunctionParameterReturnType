/*#include <iostream>
using namespace std;

void mySum(float m, float n); //function prototypes
void myMultiply(float p, float q);

int main()
{
	float x, y;//local scope means available only insude this main function
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y; ";
	cin >> y;
	mySum(x,y);//function call
	myMultiply(x, y);
}

//function with dummy parameters/arguments
void mySum(float m, float n)//adding two numbers
{
	cout << "\nThe sum of two numbers is: " << m + n << endl;
}

void myMultiply(float p, float q)
{
	cout << "\nThe product of two numbers is: " << p * q << endl;
}*/

#include <iostream>
using namespace std;
void perimeter_sq(float m);
void area_sq(float m);
void perimeter_rec(float m, float n);
void area_rec(float m, float n);
int main()
{
	int n;
	float x, y;
	cout << "1.Square" << endl;
	cout << "2.Rectangle" << endl;
	cin >> n;
	if (n == 1)
	{
		cout << "What is the length of the side?: ";
		cin >> x;
		perimeter_sq(x);
		area_sq(x);
	}
	else 
	{
		cout << "What is the length of the side?: ";
		cin >> x;
		cout << "What is the breadth?: ";
		cin >> y;
		perimeter_rec(x, y);
		area_rec(x, y);
	}
}

void perimeter_sq(float m)
{
	cout << "\nperimeter of the square is: " << 4 * m << endl;
}
void area_sq(float m)
{
	cout << "\nArea of the square is: " << m * m << endl;
}

void perimeter_rec(float m, float n)
{
	cout << "\nPerimetre of the rectangle is: " << 2*(m + n) << endl;
}
void area_rec(float m, float n)
{
	cout << "\nAres of the rectangle is: "<< m*n << endl;
}
