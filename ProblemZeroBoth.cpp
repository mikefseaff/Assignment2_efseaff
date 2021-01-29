#include <iostream>

using namespace std;
//Function that zeroes both values by reference
void zeroBoth(int &a, int &b){
    cout << "Pre-zeroed a: " << a << endl;
    cout << "Pre=zeroed b: " << b << endl;
    a = 0;
    b = 0;
    cout << "Zeroed a: " << a << endl;
    cout << "Zeroed b: " << b << endl;
}


int main (int argc, char **argv){
	int a = 5;
    int b = 7;
    zeroBoth(a,b);
	return 0;
}