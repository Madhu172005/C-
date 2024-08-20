#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double num, cube;
	cout<<"Enter a non-negative number:";
	cin>> num;
	if (num>=0){
		cube=cbrt(num);
		cout<<"Cube root of "<<num<<" is "<<cube<<endl;
	}else {
        cout << "Error: Negative number. Cube root is not defined for negative numbers." << endl;
    }

    return 0;
		
}