#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {75, 90, 45, 85, 60};

    map<string, int> students;
    students["Atharv"] = 75;
    students["Rahul"] = 90;
    students["Aman"] = 45;
    students["Riya"] = 85;
    students["Sneha"] = 60;

    unordered_map<string, int> result;
    result = {
        {"Atharv", 75},
        {"Rahul", 90},
        {"Aman", 45},
        {"Riya", 85},
        {"Sneha", 60}
    };

    // Sort marks
    sort(marks.begin(), marks.end());

    cout << "Sorted Marks: ";
    for (int m : marks)
        cout << m << " ";

    // Find a mark
    auto it = find(marks.begin(), marks.end(), 85);

    if (it != marks.end())
        cout << "\n85 Marks Found";

    // Find marks greater than 80
    cout << "\nMarks above 80: ";
    for (int m : marks) {
        if (m > 80)
            cout << m << " ";
    }

    // Transform marks
    transform(marks.begin(), marks.end(),
              marks.begin(),
              [](int m) { return m + 5; });

    cout << "\nAfter adding 5 marks: ";
    for (int m : marks)
        cout << m << " ";

    // Display map
    cout << "\n\nStudent Records:\n";
    for (auto s : students)
        cout << s.first << " : " << s.second << endl;

    return 0;
}
