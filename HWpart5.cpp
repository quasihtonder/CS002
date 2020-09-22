#include<iostream>
using namespace std;
int main() {

	int a = 0;
	int b = 0;
	int dw = 0;
	int pw = 0;
	bool t = true;
	int time = 0;

	while (t == true) {
		time++;
		a = 1 + (rand() % 100);
		cout << "What number do you going to pick between 1-100?" << endl;
		cin >> b;
		int a1 = abs(21 - a);
		int b1 = abs(21 - b);
		cout << "You input " << b << "." << endl;
		cout << "Dealer input " << a << "." << endl;
		if (a1 < b1 || a1 == b1) {
			cout << "Dealer wins." << endl;
			dw++;
		}
		else {
			cout << "player wins." << endl;
			pw++;
		}
		if (b == 21) {
			t = false;
		}
	}
	cout << "Time played " << time << endl;
	cout << "Player win " << pw << " times." << endl;
	cout << "Dealer win " << dw << " times." << endl;
	cout << "You are " << pw << " for " << time << endl;
	return 0;
}
