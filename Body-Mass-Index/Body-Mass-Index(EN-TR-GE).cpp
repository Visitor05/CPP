#include <iostream>
#include <string>

using namespace std;

// Function to calculate BMI
float calculateBMI(float weight, float heightInMeters) {
    return weight / (heightInMeters * heightInMeters);
}

// Function to display the BMI in the chosen language
void displayBMI(float bmi, int language) {
    if (language == 1) {
        cout << "Your BMI is: " << bmi << endl;
    }
    else if (language == 2) {
        cout << "Vücut Kitle İndeksiniz: " << bmi << endl;
    }
    else if (language == 3) {
        cout << "Ihr BMI ist: " << bmi << endl;
    }
    else {
        cout << "Invalid language selection! / Geçersiz dil seçimi! / Ungültige Sprachauswahl!" << endl;
    }
}

int main() {
    int language;
    float weight, heightInCm, heightInMeters;

    // Language choice
    cout << "Please select a language / Lütfen bir dil seçin / Bitte wählen Sie eine Sprache aus:\n";
    cout << "1. English\n";
    cout << "2. Türkçe\n";
    cout << "3. Deutsch\n";
    cout << "Enter your choice(1/2/3): ";
    cin >> language;

    // Prompt for weight and height in the selected language
    if (language == 1) {
        cout << "Enter your weight in kilograms: ";
        cin >> weight;
        cout << "Enter your height in centimeters: ";
        cin >> heightInCm;
    }
    else if (language == 2) {
        cout << "Kilonuzu kilogram cinsinden girin: ";
        cin >> weight;
        cout << "Boyunuzu santimetre cinsinden girin: ";
        cin >> heightInCm;
    }
    else if (language == 3) {
        cout << "Geben Sie Ihr Gewicht in Kilogramm ein: ";
        cin >> weight;
        cout << "Geben Sie Ihre Größe in Zentimetern ein: ";
        cin >> heightInCm;
    }
    else {
        cout << "Invalid language selection! / Geçersiz dil seçimi! / Ungültige Sprachauswahl!" << endl;
        return 1;
    }

    // Convert height from centimeters to meters
    heightInMeters = heightInCm / 100.0;

    float bmi = calculateBMI(weight, heightInMeters);

    displayBMI(bmi, language);

    return 0;
}
