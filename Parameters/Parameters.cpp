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

/*#include <iostream>
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
}*/



/*#include <iostream>
using namespace std;

float mySum(float m, float n); //function prototypes
float myMultiply(float p, float q);
float perimeter_sq(float m);
float area_sq(float m);
float perimeter_rec(float m, float n);
float area_rec(float m, float n);

int main()
{
	float result, result1, n, per_sq, per_rec, area_Sq, area_Rec;
	float x, y;//local scope means available only insude this main function
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y; ";
	cin >> y;
	result = mySum(x, y);//function call and recieves the returned value
	result1 = myMultiply(x, y);
	per_sq = perimeter_sq(x);
	area_Sq = area_sq(x);
	per_rec = perimeter_rec(x, y);
	area_Rec = area_rec(x, y);
	cout << "\nresult = " << result << endl;
	cout << "\nresult1 = " << result1 << endl;
	cout << "1.Square" << endl;
	cout << "2.Rectangle" << endl;
	cin >> n;
	if (n == 1)
	{
		cout<<"\nPerimetre = " << per_sq <<endl;
		cout << "\nArea = " << area_Sq << endl;
	}
	else
	{
		cout << "\nPerimetre = " << per_rec << endl;
		cout << "\nArea = " << area_Rec << endl;;
	}
}

//function with dummy parameters/arguments
float mySum(float m, float n)//adding two numbers
{
	return (m+n);
}

float myMultiply(float p, float q)
{
	return (p * q);
}

float perimeter_sq(float m)
{
	return (m * 4);
}

float area_sq(float m)
{
	return(m * m);
}

float perimeter_rec(float m, float n)
{
	return (2*(m + n));
}
float area_rec(float m, float n)
{
	return (m * n);
}*/



#include <iostream>
#include <string.h>
using namespace std;

void StudentInput()
{
	string student;
	int grades1;
	int grades2;
	int total;
	for (int i = 0; i < 3; i++)
	{
		cout << "\nEnter the name of the student: ";
		cin >> student;
		cout << "\nEneter grade for 2 paper: "<<endl;
		cin >> grades1 >> grades2;
		total = SudentInput(student, grades1, grades2);
	}
}
int StudentOutput()
{
	string student[3];
	int grades1[3];
	int grades2[3];
	int total;
	StudentInput();
	for (int i = 0; i < 3; i++)
	{
		total[i] = grades1[i] + grades2[i];
		return (grades1[i] + grades2[i]);
	}
}

int main()
{
	StudentInput();
	StudentOutput();
}