// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;
// int main(){
// srand(time(0));
// string password; 
// char characters[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-_=+[]{};',.?:<>/";
// int size=sizeof(characters)/sizeof(characters[0]);
// int lenght;
// cout<<"Enter Count Of Lenght For Your Password : ";
// cin>>lenght;
// for(int i=1 ; i<=lenght ; i++)
// {
//     int randam = rand() % size ;
//     password+= characters[randam];
// }
// cout<<"\nyour password => "<<password<<endl<<endl;
// system("pause");
//     return 0;
// }
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
    srand(time(0));

    string password;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-_=+[]{};',.?:<>/";
    int size = sizeof(characters) - 1; // exclude '\0'
    int length;

    cout << "Enter the length of the password: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        int random = rand() % size;
        password += characters[random];
    }

    cout << "\nGenerated Password => " << password << endl;

    // إدخال اسم المنصة
    string platform;
    cout << "Enter platform name : ";
    cin >> ws;  // علشان يتجاهل أي space فاضل من cin
    getline(cin, platform);

    // حفظ في الملف
    ofstream file("Passwords.txt", ios::app); // append mode
    if (file.is_open()) {
        file << "Platform: " << platform << " | Password: " << password << "\n";
        file.close();
        cout << "Password saved successfully\n\n";
    } else {
        cerr << "Error: Couldn't open file.\n";
    }

    // system("pause");
    return 0;
}
