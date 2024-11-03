/*#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World" << endl;
	cout << "Today is MONDAY" <<endl ;
	
		
	int number1 = 10;
	int number2 = 10;
	
	//number2 = ++number1 ;

	number1++;  // number1 = number1+1
	
	cout << "The first number is" << number1 << endl;
	cout << "The second number is" << ++number2 << endl ;
	cout << "The updated number is" << number2 << endl;

	return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
	int number1;
	int number2;
	int total = 0;
	// The integer declarations above 
	// can also be written as follows:
	// int number1, number2, total = 0;

	number1 = 5;
	number2 = 10;
	//cin >> number1 >> number2; 

	total = number1 + number2;

	cout << "result : " << total << endl;

	system("pause");

	return 0;

}