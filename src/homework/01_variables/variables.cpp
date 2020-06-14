#include "variables.h"
const double TAX_RATE = .0675;

/*example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
} */

/* This function multiplies the meal cost by the tax percentage, and returns resulting tax amount*/

double get_sales_tax_amount(double meal_amount)
{
  double tax;

  tax = TAX_RATE * meal_amount;

  return tax;
}

/* This function multiplies the meal cost by the tip percentage, and returns resulting tip amount*/

double get_tip_amount(double meal_amount, double tip_rate)
{
  double tip = meal_amount * tip_rate;
  
  return tip;
}


