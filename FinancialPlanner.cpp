#include <iostream>

// set namespace
using namespace std;


// Global constant definition(s)
const double TAX = 0.14;                     // income tax percentage
const double CLOTHES = 0.10;                 // clothing budget percentage
const double SCHOOL_SUPPLIES = 0.01;         // School supply percentage
const double SAVINGS_BONDS = 0.25;           // savings bonds percentage
const double MATCHING_BONDS = 0.50;          // matching contribution percentage

/// -------------------------------------------------------------------------
/// Main entry-point for this application
///
/// @returns Exit-code for the process - 0 for success, else an error code.
/// -------------------------------------------------------------------------
int main() {
    // Variable declarations(s)
    int exitState;                  // tracks the exit code for the process
    exitState = EXIT_SUCCESS;       // set state to successful run

    double payRate;                 // user input: pay per hour

    double hoursWorkedWeek1;        // user input: hours worked week 1
    double hoursWorkedWeek2;        // user input: hours worked week 2
    double hoursWorkedWeek3;        // user input: hours worked week 3
    double hoursWorkedWeek4;        // user input: hours worked week 4
    double hoursWorkedWeek5;        // user input: hours worked week 5

    double totalHoursWorked;        // calculated total hours
    double totalIncome;             // calculated total income
    double netIncome;               // calculated income after taxes
    double costOfClothes;           // calculated clothing expense
    double costOfSchoolSupplies;    // calculated school supply cost
    double costOfSavingsBonds;      // calculated savings bond contribution
    double matchingSavingsBonds;    // calculated matching funds

    /* ******* Input Phase *********************************************** */
    // obtain pay rate and hours worked for each week from user
    cout << "Enter the per hour pay rate: ";
    cin >> payRate;
    cout << endl;

    cout << "Enter the number of hours worked for week 1: ";
    cin >> hoursWorkedWeek1;
    cout << endl;

    cout << "Enter the number of hours worked for week 2: ";
    cin >> hoursWorkedWeek2;
    cout << endl;

    cout << "Enter the number of hours worked for week 3: ";
    cin >> hoursWorkedWeek3;
    cout << endl;

    cout << "Enter the number of hours worked for week 4: ";
    cin >> hoursWorkedWeek4;
    cout << endl;

    cout << "Enter the number of hours worked for week 5: ";
    cin >> hoursWorkedWeek5;
    cout << endl;


    /* ******* Processing Phase ****************************************** */
    // calculate total hours worked
    totalHoursWorked = hoursWorkedWeek1   + hoursWorkedWeek2
                       + hoursWorkedWeek3 + hoursWorkedWeek4
                       + hoursWorkedWeek5;

    // calculate total income
    totalIncome = totalHoursWorked * payRate;

    // calculate net income
    netIncome = totalIncome * (1 - TAX);

    // calculate clothing cost
    costOfClothes = netIncome * CLOTHES;

    // calculate school supply cost
    costOfSchoolSupplies = netIncome * SCHOOL_SUPPLIES;

    // calculate savings bonds cost
    costOfSavingsBonds = (netIncome -
                          costOfClothes -
                          costOfSchoolSupplies) * SAVINGS_BONDS;

    // calculate matching contribution
    matchingSavingsBonds = costOfSavingsBonds * MATCHING_BONDS;


    /* ******* Output Phase ********************************************** */
    // Report calculated results
    cout << "Total Income before tax: $ " << totalIncome
         << "\nNet Income: $ " << netIncome
         << "\nMoney spent on clothes and other accessories: $ "
         << costOfClothes
         << "\nMoney spent on school supplies: $ " << costOfSchoolSupplies
         << "\nMoney spent to buy savings bonds: $ " << costOfSavingsBonds
         << "\nMoney matched to buy additional savings bonds: $ "
         << matchingSavingsBonds << endl;

    return exitState;
}
