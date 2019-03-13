#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
 
{
   float wage = 0;
   float hoursWorked = 0;
   float totalPay = 0;
   float afterTaxes = 0;
   float clothingCost = 0;
   float schoolSuppliesCost = 0;
   float savingsBonds = 0;
   float remainingMoney = 0;
   float parentsBonds = 0;

   cout << "Hourly Wage:";
   cin >> wage;
   
   cout << "\nHours worked per week:";
   cin >> hoursWorked;
   totalPay = hoursWorked * wage * 5;
   
   cout << "\nAfter five weeks:"; 
   cout << "\nTotal Pay Before Taxes: $" << totalPay;
   afterTaxes = totalPay * .86;
   
   cout << "\nTotal Pay After Taxes: $" << afterTaxes;
   clothingCost = afterTaxes * .1;
   
   cout << "\nAmount Spent on Clothing: $" << clothingCost;
   schoolSuppliesCost = afterTaxes * .01;
   
   cout << "\nAmount Spent on School Supplies: $" << schoolSuppliesCost;
   remainingMoney = afterTaxes - clothingCost - schoolSuppliesCost;
   savingsBonds = remainingMoney * .25;
  
   cout << "\nAmount Spent on Saving Bonds: $" << savingsBonds;
   parentsBonds = savingsBonds * .5;
   
   cout << "\nAmount Added By Parents for Savings Bond: $" << parentsBonds;
   
   _getch();
   return 0;
}
