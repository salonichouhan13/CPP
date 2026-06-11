#include<iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 17) {
        cout << "Not eligible for job";
    }
    else {
        cout << "Eligible for job";

        if (age >= 55) {
            cout << "\nMay be replaceable";
        }
    }

    return 0;
}