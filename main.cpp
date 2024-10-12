#include <iostream>
using namespace std;

// Functions
double usdToEur(double usd);
double eurToUsd(double eur);
double usdToGbp(double usd);
double gbpToUsd(double gbp);
double usdToJpy(double usd);
double jpyToUsd(double jpy);

int main() {
    double amount;
    int choice;

    // Display
    cout << "Currency Converter" << endl;
    cout << "1: USD to EUR" << endl;
    cout << "2: EUR to USD" << endl;
    cout << "3: USD to GBP" << endl;
    cout << "4: GBP to USD" << endl;
    cout << "5: USD to JPY" << endl;
    cout << "6: JPY to USD" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    cout << "Enter the amount : ";
    cin >> amount;

    // Conversion
    if (choice == 1) {
        cout << amount << " USD is equivalant to " << usdToEur(amount) << " EUR" << endl;
    } else if (choice == 2) {
        cout << amount << " EUR is equivalant to " << eurToUsd(amount) << " USD" << endl;
    } else if (choice == 3) {
        cout << amount << " USD is equivalant to " << usdToGbp(amount) << " GBP" << endl;
    } else if (choice == 4) {
        cout << amount << " GBP is equivalant to " << gbpToUsd(amount) << " USD" << endl;
    } else if (choice == 5) {
        cout << amount << " USD is equivalant to " << usdToJpy(amount) << " JPY" << endl;
    } else if (choice == 6) {
        cout << amount << " JPY is equivalant to " << jpyToUsd(amount) << " USD" << endl;
    } else {
        cout << "The Choise you have entered is invalid" << endl;
    }

    return 0;
}

// Function definitions
double usdToEur(double usd) {
    const double rate = 0.91;
    return usd * rate;
}

double eurToUsd(double eur) {
    const double rate = 1.09;
    return eur * rate;
}

double usdToGbp(double usd) {
    const double rate = 0.77;
    return usd * rate;
}

double gbpToUsd(double gbp) {
    const double rate = 1.31;
    return gbp * rate;
}

double usdToJpy(double usd) {
    const double rate = 149.16;
    return usd * rate;
}

double jpyToUsd(double jpy) {
    const double rate = 0.0067;
    return jpy * rate;
}
