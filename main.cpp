#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set dogs age
    int early_years = 21, dog_age, later_years, human_years;
    string dog_name;

    cout << "What is your dog's name: ";
    cin >> dog_name;
    cout << "How old is your dog: ";
    cin >> dog_age;

    later_years = (dog_age - 2) * 4;Ag
    human_years = early_years + later_years;

    cout << "That means " << dog_name << " is " << human_years << " in human years! \n";
}