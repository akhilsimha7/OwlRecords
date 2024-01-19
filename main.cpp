// An Application that helps you manage finances.

// 50% Bills - Rent, amenities
// 10% Savings - Emergency Funds
// 20% Investing - Share Markets
// 20% Entertainment - Movies, Parties

#include <iostream>

using namespace std;

int *calExpe(int salary)
{
    int bills, savings, investing, enteratainment;
    int breakup[4] = {50, 10, 20, 20};
    int *manage = new int[4];

    for (int i = 0; i < 4; i++)
    {
        manage[i] = breakup[i] * 0.01 * salary;
    }
    return manage;
}

int main()
{
    string userName;
    int salary;
    cout << "Welcome, Please enter you name:";
    cin >> userName;
    cout << "\nThank You and Welcome " << userName << " !\nCan you please enter your salary for the month:" ;
    cin >> salary;
    int *breakup = calExpe(salary);
    cout << "-------- Salary Breakup --------" << endl;
    string expense[4] = {"Bills","Savings","Investing","Entertainment"};
    for (int i = 0; i < 4; i++)
    {
        cout << expense[i] << ": " << breakup[i] << endl;
    }
    delete[] breakup;
}