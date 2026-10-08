#include <iostream>
using namespace std;

// Function to calculate tax
double calculateTax(double grossSalary)
{
    double tax;

    if (grossSalary < 30000)
    {
        tax = grossSalary * 0.05;
    }
    else if (grossSalary < 60000)
    {
        tax = grossSalary * 0.10;
    }
    else
    {
        tax = grossSalary * 0.15;
    }

    return tax;
}

int main()
{
    double grossSalary;
    double tax;
    double netSalary;

    // Prompt the user to enter gross salary
    cout << "Enter the employee's gross salary: KSh ";
    cin >> grossSalary;

    // Call the calculateTax function
    tax = calculateTax(grossSalary);

    // Calculate net salary
    netSalary = grossSalary - tax;

    // Display the results
    cout << "\nGross Salary: KSh " << grossSalary << endl;
    cout << "Tax Amount: KSh " << tax << endl;
    cout << "Net Salary: KSh " << netSalary << endl;

    return 0;
}
