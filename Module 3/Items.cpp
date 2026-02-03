#include <iostream>
using namespace std;

int main(){

string item;
double quantity = 0;
double cost = 0;

cout << " Hello! enter a item : " << endl;
cin>> item;

cout << " Enter a quantity : " << endl;
cin>> quantity;

cout << " The cost is : " << endl;
cin>> cost;

double total = quantity * cost;

cout << " The total cost of " << item << " is : " << " $ " << total << endl;


return 0;    
