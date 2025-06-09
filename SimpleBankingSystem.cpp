
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Account {
    string name;
    int id;
    double balance;
};

int main() {
    Account acc;
    cout << "Enter your name: ";
    cin >> acc.name;
    cout << "Enter your ID: ";
    cin >> acc.id;
    cout << "Enter your balance: ";
    cin >> acc.balance;

    ofstream outFile("account.txt");
    outFile << acc.name << " " << acc.id << " " << acc.balance << endl;
    outFile.close();

    cout << "Account information saved to account.txt" << endl;

    ifstream inFile("account.txt");
    cout << "Reading from file:" << endl;
    inFile >> acc.name >> acc.id >> acc.balance;
    cout << "Name: " << acc.name << ", ID: " << acc.id << ", Balance: $" << acc.balance << endl;

    return 0;
}
