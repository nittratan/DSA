#include <iostream>
using namespace std;

int main() {
    // char c;
    // cout << "Enter a character: ";
    // cin >> c;
    // cout << "ASCII Value of " << c << " is " << int(c);
    // return 0;

    cout << "\nThe ASCII Values of all the Characters are\n";
	
	for(int i = 0; i <= 255; i++)
	{
		cout << "The ASCII value of " << (char)i << " = " << i << endl;
	}
		
 	return 0;
}