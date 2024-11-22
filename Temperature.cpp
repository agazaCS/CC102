#include <iostream>

using namespace std;

int main() {
	int temperature;
	
	cout << "Enter the temperature: ";
	cin >> temperature;
	
	if (temperature < 32) {
		cout << "Tell the user to bring a heavy jacket." << endl;
	} 
	else if (temperature >= 32 && temperature <= 50) {
		cout << "Tell the user to bring a light jacket." << endl;
	}
	else {
		cout << "Tell the user not to bring any jacket." << endl;
	}
	return 0;
}