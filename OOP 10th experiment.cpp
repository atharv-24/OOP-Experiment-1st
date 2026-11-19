#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll, marks;

    // Writing CSV file
    fstream file("students.csv",
                 ios::out | ios::trunc);

    file << "Roll,Name,Marks\n";
    file << "1,Atharv,85\n";
    file << "2,Rahul,90\n";
    file << "3,Aman,75\n";

    cout << "File Position: " << file.tellp() << endl;

    file.close();

    // Reading CSV file
    file.open("students.csv", ios::in);

    string line;

    cout << "\nStudent Records:\n";

    getline(file, line); // Skip heading

    while (getline(file, line)) {
        cout << line << endl;
    }

    cout << "\nReading Position: " << file.tellg() << endl;

    // Demonstrating seekg()
    file.clear();
    file.seekg(0, ios::beg);

    cout << "\nFile Content Again:\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}
