#include <iostream>
using namespace std;

class Character {
public:
    string name;
    int age;
    string gender;
    string race;
    float height;

    void inputDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter race: ";
        cin >> race;
        cout << "Enter height (in meters): ";
        cin >> height;
    }

    void printName() {
        cout << "Name: " << name << endl;
    }

    void printAge() {
        cout << "Age: " << age << endl;
    }

    void printRace() {
        cout << "Gender: " << gender << endl;
        cout << "Race: " << race << endl;
    }

    void printHeight() {
        cout << "Height: " << height << " meters" << endl;
    }

    void printAttackPower() {
        cout << "Attack Power: " << height * 10 << endl;
    }
};

int main() {
    Character c;
    c.inputDetails();

    cout << "\n--- Character Info ---\n";
    c.printName();
    c.printAge();
    c.printRace();
    c.printHeight();
    c.printAttackPower();

    return 0;
}

