#include <iostream>
using namespace std;

int main() {
    string player_name;
    int pokemon_choice = -1;
    bool valid_choice = 0;

    cout << "Enter your name: ";
    cin >> player_name;

    cout << "Good morning, " << player_name << ", or should I say, good evening." << endl;
    cout << "I am Professor Oak. Please choose your starter Pokémon:" << endl;
    cout << "[1] Chespin" << endl;
    cout << "[2] Fennekin" << endl;
    cout << "[3] Froakie" << endl;
    cin >> pokemon_choice;

    while (!valid_choice) {
        switch (pokemon_choice) {
        case 1:
            cout << "You selected Chespin. A spiky choice!" << endl;
            valid_choice = 1;
            break;
        case 2:
            cout << "You selected Fennekin. A fiery choice!" << endl;
            valid_choice = 1;
            break;
        case 3:
            cout << "You selected Froakie. A bubbly choice!" << endl;
            valid_choice = 1;
            break;
        default:
            cout << "Invalid selection. Please choose your starter Pokémon:" << endl;
            cout << "[1] Chespin" << endl;
            cout << "[2] Fennekin" << endl;
            cout << "[3] Froakie" << endl;
            cin >> pokemon_choice;
        }
    }
                                  
    return 0;
}
