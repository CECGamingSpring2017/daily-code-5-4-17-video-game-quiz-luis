#include <iostream>
using namespace std;

int main() {

	int pikachu = 0;
	int bulbasaur = 0;
	int squirtle = 0;
	int charmander = 0;
	char input;

	cout << "find out what starter pokemon you are!!" << endl << endl;
	system("PAUSE");
	//////////////////
	cout << "What is your favorite color??" << endl;
	cout << "type 'y' for yellow, 'r' for red, 'b' for blue, and 'g' green." << endl;
	cin >> input;
	if (input == 'y') {

		pikachu++;

	}
	else if (input == 'r') {

		charmander++;

	}
	else if (input == 'b') {

		squirtle++;

	}
	else if (input == 'g') {

		bulbasaur++;

	}
	else
		cout << "not a valid color" << endl;
	//////////////////
	cout << "What are you nomally??" << endl;
	cout << "Travel in your trainers shoulders 's', 'r', 'b' for blue, and 'g' green." << endl;
	cin >> input;
	//////////////////
	cout << "What is your favorite color??" << endl;
	cout << "type 'y' for yellow, 'r' for red, 'b' for blue, and 'g' green." << endl;
	cin >> input;
	//////////////////
	cout << "What is your favorite color??" << endl;
	cout << "type 'y' for yellow, 'r' for red, 'b' for blue, and 'g' green." << endl;
	cin >> input;

	if (input == 'y') {

		pikachu++;

	}
	else if (input == 'r') {

		charmander++;

	}
	else if (input == 'b') {

		squirtle++;

	}
	else if (input == 'g') {

		bulbasaur++;

	}
	else
		cout << "not a valid color" << endl;

	cout << pikachu << " " << squirtle << " " << charmander << " " << bulbasaur << endl;

}