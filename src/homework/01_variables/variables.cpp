#include "variables.h"
const double TAX_RATE = .0675;
/*example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
} */

/* This function multiplies the meal cost by the tax percentage, and returns the total*/

double get_sales_tax_amount(double meal_amount)
{
  double meal_plus_tax;

  meal_plus_tax = TAX_RATE * meal_amount;

  return meal_plus_tax;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
  
}


