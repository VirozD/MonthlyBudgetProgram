// Lab 2 - Monthly Budget
//

#include <iostream>
using namespace std;

struct MonthlyBudget {

    double housing;
    double utilities;
    double houseHoldExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;

};

void inputExpenses(MonthlyBudget& expenses);
void displayReport(MonthlyBudget budget, MonthlyBudget expenses);

int main()
{
    MonthlyBudget monthlyBudget;

    monthlyBudget.housing = 500.00;
    monthlyBudget.utilities = 150.00;
    monthlyBudget.houseHoldExpenses = 65.00;
    monthlyBudget.transportation = 50.00;
    monthlyBudget.food = 250.00;
    monthlyBudget.medical = 30.00;
    monthlyBudget.insurance = 100.00;
    monthlyBudget.entertainment = 150.00;
    monthlyBudget.clothing = 75.00;
    monthlyBudget.miscellaneous = 50.00;

    MonthlyBudget userExpenses;

    //get expenses from user
    inputExpenses(userExpenses);

    //display report
    displayReport(monthlyBudget, userExpenses);

    system("pause>0");

}


void inputExpenses(MonthlyBudget& expenses) {

    cout << "Input Housing expense: ";
    cin >> expenses.housing;

    cout << "Input Utilities expense: ";
    cin >> expenses.utilities;

    cout << "Input House Hold expenses: ";
    cin >> expenses.houseHoldExpenses;

    cout << "Input Transportation expense: ";
    cin >> expenses.transportation;

    cout << "Input Food expense: ";
    cin >> expenses.food;

    cout << "Input Medical expense: ";
    cin >> expenses.medical;

    cout << "Input Insurance expense: ";
    cin >> expenses.insurance;

    cout << "Input Entertainment expense: ";
    cin >> expenses.entertainment;

    cout << "Input Clothing expense: ";
    cin >> expenses.clothing;

    cout << "Input Miscellaneous expense: ";
    cin >> expenses.miscellaneous;

    cout << endl;
}

void displayReport(MonthlyBudget budget, MonthlyBudget expenses) {

    double totalDifference = 0;
    double difference = budget.housing - expenses.housing;
    totalDifference += difference;
    cout << "Difference for housing: " << difference << endl;

    difference = budget.utilities - expenses.utilities;
    totalDifference += difference;
    cout << "Difference for utilities: " << difference << endl;

    difference = budget.houseHoldExpenses - expenses.houseHoldExpenses;
    totalDifference += difference;
    cout << "Difference for Household Expenses: " << difference << endl;

    difference = budget.transportation - expenses.transportation;
    totalDifference += difference;
    cout << "Difference for Transportation: " << difference << endl;

    difference = budget.food - expenses.food;
    totalDifference += difference;
    cout << "Difference for Food: " << difference << endl;

    difference = budget.medical - expenses.medical;
    totalDifference += difference;
    cout << "Difference for Medical Expenses: " << difference << endl;

    difference = budget.insurance - expenses.insurance;
    totalDifference += difference;
    cout << "Difference for Insurance: " << difference << endl;

    difference = budget.entertainment - expenses.entertainment;
    totalDifference += difference;
    cout << "Difference for Entertainment Expense: " << difference << endl;

    difference = budget.clothing - expenses.clothing;
    totalDifference += difference;
    cout << "Difference for Clothing Expense: " << difference << endl;

    difference = budget.miscellaneous - expenses.miscellaneous;
    totalDifference += difference;
    cout << "Difference for Miscellaneous Expenses: " << difference << endl;

    cout << endl;

    string overOrUnder;

    if (totalDifference > 0) {
        overOrUnder = "under ";
    }

    else if (totalDifference < 0) {
        overOrUnder = "over ";
    }

    cout << "During this month, you are " << overOrUnder << "your monthly budget by " << totalDifference << ".";

}