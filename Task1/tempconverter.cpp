#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

// for converting Celsius to Fahrenheit
double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

//for converting Celsius to Kelvin
double celsiusToKelvin(double c) {
    return c + 273.15;
}

//for converting Fahrenheit to Celsius
double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

//for converting Kelvin to Celsius
double kelvinToCelsius(double k) {
    return k - 273.15;
}

int main() {
    double temperature;
    string unit;

    cout << "______________________________________\n";
    cout << "   Temperature Converter by Ritesh \n";
    cout << "       (Celsius, Fahrenheit, Kelvin)   \n";
    cout << "______________________________________\n";

    // Ask user for input
    cout << "\nEnter temperature value: ";
    cin >> temperature;

    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    // Converting unit to uppercase just in case
    transform(unit.begin(), unit.end(), unit.begin(), ::toupper);

    cout << fixed << setprecision(2);  // Set decimal precision

    cout << "\nConverting...\n\n";

    if (unit == "C") {
        cout << "Input: " << temperature << " C\n";
        cout << "In Fahrenheit: " << celsiusToFahrenheit(temperature) << " F\n";
        cout << "In Kelvin: " << celsiusToKelvin(temperature) << " K\n";
    }
    else if (unit == "F") {
        double c = fahrenheitToCelsius(temperature);
        cout << "Input: " << temperature << " F\n";
        cout << "In Celsius: " << c << " C\n";
        cout << "In Kelvin: " << celsiusToKelvin(c) << " K\n";
    }
    else if (unit == "K") {
        double c = kelvinToCelsius(temperature);
        cout << "Input: " << temperature << " K\n";
        cout << "In Celsius: " << c << " C\n";
        cout << "In Fahrenheit: " << celsiusToFahrenheit(c) << " F\n";
    }
    else {
        cout << "Oops! Invalid unit. Please enter C, F, or K next time.\n";
    }

    cout << "\nThanks for using the converter!\n";

    return 0;
}
