#include <iostream>
using namespace std;

int main() {
    float annualSalary; // variable, the function is to contain and explain what kind the data is being stored (temporary or permanently).
    float monthlySalary =  annualSalary / 12; // it's also to indentify how many data is able to be stored on it.

    cout << "How many your annual salary is? : "; // cout (terminal out), to showing end result or showing messages
    cin >> annualSalary; // cin (terminal in), to asking user to input data onto computer.
    cout <<  "Your monthly salary is: " << monthlySalary << endl;
    cout <<  "You also able to earn " << annualSalary * 10 << " in 10 years";
}