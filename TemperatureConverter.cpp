#include <iostream>
using namespace std;

// Converts Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << endl;
    return 0;
}
