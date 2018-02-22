#include <iostream>
using namespace std;
int main()
{
int Number1, Number2;
char e;
// input two number
cout << "Enter first number : ";
cin >> Number1;
cout << "Enter second number : ";
cin >> Number2;
do
{
scanf("%c",&e);
// Diplay two add
cout << endl;
cout << "Sum " << Number1 << " + " << Number2;
cout << " = " << Number1 + Number2 << endl;
cout << endl;
cout << "Sum " << Number1 << " - " << Number2;
cout << " = " << Number1 - Number2 << endl;
cout << endl;
cout << "Sum " << Number1 << " * " << Number2;
cout << " = " << Number1 * Number2 << endl;
cout << endl;
cout << "Sum " << Number1 << " / " << Number2;
cout << " = " << Number1 / Number2 << endl;
cout << "Enter first number : ";
cin >> Number1;
cout << "Enter second number : ";
cin >> Number2;
}
while(e!='q');
cout<<"\n###END Pocess###\t"<<endl;
return (0);
}
