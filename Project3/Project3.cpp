#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream in("SalaryData.txt");
    ofstream out("SalaryOut.txt");
    if (!in || !out) {
        cerr << "Error opening files" << endl;
        return 1;
    }
    string firstName, lastName;
    double salary, raise, newSalary;
    while (in >> lastName >> firstName >> salary >> raise) {
        newSalary = salary * (1 + raise / 100.0);
        out << firstName << " " << lastName << " " << fixed << setprecision(2) << newSalary << endl;
    }
    in.close();
    out.close();
    cout << "Salary for employees has been updated to the file" << endl;
    return 0;
}

