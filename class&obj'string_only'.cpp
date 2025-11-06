#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    string arr [5] = {"name","age","gender","race","height"};

    void inputDetails() {
        cout << "Enter name: ";
        cin >> arr[0];
        cout << "Enter age: ";
        cin >> arr[1];
        cout << "Enter gender: ";
        cin >> arr[2];
        cout<< "enter RACE :";
        cin>>arr[3];
        cout<<"enter height";
        cin>>arr[4];
        
    }

    void printName() {
        cout << "Name: " << arr[0] << endl;
    }

    void printAge() {
        cout << "Age: " << arr[1] << endl;
    }

    void printGender() {
        cout << "Gender: " << arr[2]<< endl;
       
    }
    void printRace() {
        cout<<"race:"<<arr[3]<<endl;
    }
    void printHeight() {
        cout<<"height"<<arr[4]<<endl;
    }

  
};

int main() {
    Character c;
    c.inputDetails();

    cout << "\n--- Character Info ---\n";
    c.printName();
    c.printAge();
    c.printGender();
    c.printRace();
    c.printHeight();
    
    

    return 0;
}
