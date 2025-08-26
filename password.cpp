#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
    srand(time(0));

    string password;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-_=+[]{};',.?:<>/";
    int size = sizeof(characters) - 1; 
    int length;

    cout << "Enter the length of the password: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        int random = rand() % size;
        password += characters[random];
    }

    cout << "\nGenerated Password => " << password << endl;

    string platform;
    cout << "Enter platform name : ";
    cin >> ws;
    getline(cin, platform);

    ofstream file("Passwords.txt", ios::app); 
    if (file.is_open()) {
        file << "Platform: " << platform << " | Password: " << password << "\n";
        file.close();
        cout << "Password saved successfully\n\n";
    } else {
        cerr << "Error: Couldn't open file.\n";
    }

    return 0;
}

