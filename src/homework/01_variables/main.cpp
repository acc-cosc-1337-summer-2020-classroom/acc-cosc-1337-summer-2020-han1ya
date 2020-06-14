//write include statements
#include "variables.h"
#include <iostream>
#include <iomanip>
//write namespace using statement for cout
using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;
using std::endl;
const double TAX_RATE = .0675;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

  cout<<"Enter meal amount: ";
  std::cin >> meal_amount;
  tax_amount = get_sales_tax_amount(meal_amount);

  cout<<"Enter tip rate: ";
  std::cin >> tip_rate;
  tip_amount = get_tip_amount(meal_amount, tip_rate);

  total = meal_amount + tax_amount + tip_amount;

  cout << setw(12) << "Meal amount:" << fixed << setprecision(2) << meal_amount << endl;
  cout << setw(12) << "Sales tax:" << tax_amount << endl;
  cout << setw(12) << "Tip amount:" << tip_amount << endl;
  cout << setw(12) << "Total:" << total << endl;
	return 0;
}
