#include <iostream>
#include <iomanip> 
using namespace std;


int main() {
    
    cout << "Hello, world!" << endl;

   
    cout << setw(10) <<setfill('*') << 123 << endl;


    cout << fixed << setprecision(2) << 123.4566766 << endl;

   
    int number = 255;
    cout << "Decimal: " << number << endl;
    cout << "Hexadecimal: " << hex << number << endl;
    cout << "Octal: " << oct << number << endl;
    cout << dec; 

   
    cout << showbase;
    cout << "Hexadecimal with base: " << hex << number << endl;
    cout << noshowbase;
    cout << showpoint;
    cout << "Floating-point with showpoint: " << 123.0 << endl;
    cout << uppercase;
    cout<<"4floating points :"<<setprecision(4)<<123.84656<<endl;
    cout << "Uppercase hexadecimal: " << hex << number << endl;

    return 0;
}
