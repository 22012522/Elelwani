#include <iostream>
using namespace std;

int main() 
{
  double expense,merch_cost, salary, rent, electricity;
  
  expense= merch_cost+salary+rent+electricity;
  
  double profit_needed=merch_cost*0.1;
  
  double new_profit=profit_needed/0.85;
  
  double markup=(new_profit+expense)/merch_cost;
    cout <<markup<<endl;
    return 0;
}