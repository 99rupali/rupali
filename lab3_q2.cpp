//include library
#include <iostream>
using namespace std;

//main function
int main()
{
int a,b,sum,subtract,product,division,remainder ; //declaration
a= 5;
b= 1;
sum = a + b; // adds 2 numbers
subtract = a - b; // calculates the difference
product = a * b; // calculates the product
division = a / b; // divides the numbers
remainder = a % b;
cout << "numbers are " << a << b << endl;
cout << "results in in " << a << b << endl;
cout << "sum is " << sum << endl;
cout << "difference is " << subtract << endl;
cout << "product is " << product << endl;
cout << "quotient is " <<  division << endl;
cout << "remainder is "<< remainder << endl;
return 0;
}
