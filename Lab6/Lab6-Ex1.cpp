#include <iostream>

using namespace std;

int main() {
    int country, city;
    cout << "Select a country" << endl;
    cout << "(1) Korea, (2) Japan, (3) USA, (4) France" << endl; // updated list of countries
    cin >> country; // read in user input for country

    switch (country) { // switch statement based on the user's country selection
        case 1: // if user selects Korea
            cout << "Select a city: (1) Seoul, (2) Incheon" << endl; // display options for cities in Korea
            cin >> city; // read in user input for city
            if (city == 1) // if user selects Seoul
                cout << "You selected Seoul, Korea." << endl; // output message indicating the user's selection
            else // if user selects Incheon or any other number
                cout << "You selected Incheon, Korea." << endl; // output message indicating the user's selection
            break; // exit the switch statement
        case 2: // if user selects Japan
            cout << "Select a city: (1) Osaka, (2) Tokyo" << endl; // display options for cities in Japan
            cin >> city; // read in user input for city
            if (city == 1) // if user selects Osaka
                cout << "You selected Osaka, Japan." << endl; // output message indicating the user's selection
            else // if user selects Tokyo or any other number
                cout << "You selected Tokyo, Japan." << endl; // output message indicating the user's selection
            break; // exit the switch statement
        case 3: // if user selects USA
            cout << "Select a city: (1) New York, (2) Los Angeles, (3) Chicago" << endl; // display options for cities in USA
            cin >> city; // read in user input for city
            if (city == 1) // if user selects New York
                cout << "You selected New York, USA." << endl; // output message indicating the user's selection
            else if (city == 2) // if user selects Los Angeles
                cout << "You selected Los Angeles, USA." << endl; // output message indicating the user's selection
            else // if user selects Chicago or any other number
                cout << "You selected Chicago, USA." << endl; // output message indicating the user's selection
            break; // exit the switch statement
        case 4: // if user selects France
            cout << "Select a city: (1) Paris, (2) Marseille, (3) Lyon" << endl; // display options for cities in France
            cin >> city; // read in user input for city
            if (city == 1) // if user selects Paris
                cout << "You selected Paris, France." << endl; // output message indicating the user's selection
            else if (city == 2) // if user selects Marseille
                cout << "You selected Marseille, France." << endl; // output message indicating the user's selection
            else // if user selects Lyon or any other number
                cout << "You selected Lyon, France." << endl; // output message indicating the user's selection
            break; // exit the switch statement
        default: // if user selects any other number besides 1, 2, 3, or 4
            cout << "Please select 1, 2, 3, or 4 for country" << endl; // output error message indicating invalid input
    }
    return 0; // indicate successful program termination
}
