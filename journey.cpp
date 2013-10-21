#include <iostream>
#include <string>

using namespace std;

void game() {
	
	bool gameOver = false;

	// Game objectives
	bool objectiveOne = false;
	bool objectiveTwo = false;
	bool objectiveThree = false;
	bool objectiveFour = false;
	bool objectiveFive = false;
	bool gameComplete = false;

	// Player input
	string input;

	// Player variables
	string name;

	// Game loop
	while(gameOver != true) {

		switch(objectiveOne) {
		case false:
			cout << " _____ _              ___" << endl;
			cout << "|_   _| |            |_  |" << endl;
			cout << "  | | | |__   ___      | | ___  _   _ _ __ _ __   ___ _   _" << endl;
			cout << "  | | | '_ \\ / _ \\     | |/ _ \\| | | | '__| '_ \\ / _ \\ | | |" << endl;
			cout << "  | | | | | |  __/ /\\__/ / (_) | |_| | |  | | | |  __/ |_| |" << endl;
			cout << "  \\_/ |_| |_|\\___| \\____/ \\___/ \\__,_|_|  |_| |_|\\___|\\__, |" << endl;
			cout << "                                                      ___/ |" << endl;
			cout << "                                                     |____/" << endl << endl;
			cout << "You wake up dazed and confused in a car, you try to start the car "
				 << endl << "but it doesn't start." << endl << endl;
			cout << "You see that the car is out of fuel, so you decide to look for a gas station." << endl << endl;
			cout << "As you walk down the road you see a sign that points to a town that's not too" << endl
				 << "far away." << endl;
			cout << "You decide to follow the sign." << endl << endl;
			cout << "You arrive in the town and visit a pub to ask for directions to the nearest" << endl
				 << "gas station." << endl << endl;
			cout << "You walk up to the counter and the barman asks \"What's your name?\"" << endl;
			cout << "> ";
			getline(cin, input);

			name = input;

			cout << "I guess my name is " << name << " you think to yourself." << endl;
			cout << "So " << name << " what would you like?" << endl;
			cout << "> ";
			getline(cin, input);

			if(input == "directions" || "Directions") {
				cout << "";
			}
		default:
			break;
		}

	}

}

int main() {
	
	game();

	return 0;
}
