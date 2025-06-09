
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    string names[MAX_STUDENTS];
    double grades[MAX_STUDENTS];
    int count = 0;

    cout << "Enter student names and grades (type 'done' to stop):" << endl;
    while (true) {
        cout << "Student name: ";
        string name;
        cin >> name;
        if (name == "done") break;

        cout << "Grade: ";
        double grade;
        cin >> grade;

        names[count] = name;
        grades[count] = grade;
        count++;
    }

    ofstream outFile("grades.txt");
    for (int i = 0; i < count; ++i) {
        outFile << names[i] << " " << grades[i] << endl;
    }
    outFile.close();

    cout << "Grades saved to grades.txt" << endl;
    return 0;
}
