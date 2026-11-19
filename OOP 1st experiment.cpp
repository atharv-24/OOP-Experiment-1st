#include <iostream>
using namespace std;

int main() {
    // Variables and data types
    int age;
    float percentage;
    char grade;
    string name;

    // Constant
    const float PI = 3.14;

    // Input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter percentage: ";
    cin >> percentage;

    cout << "Enter grade: ";
    cin >> grade;

    // Output
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl;
    cout << "PI: " << PI << endl;

    // Operators
    cout << "Age + 5: " << age + 5 << endl;
    cout << "Age * 2: " << age * 2 << endl;
    cout << "Age is greater than 18: "
         << (age > 18) << endl;

    return 0;
}
