#include <iostream>
using namespace std;
//function to find the total of an item after sales tax
//taxRate is the value of the sales tax of the item
//cost is the value of the cost of the item before tax
float addTax(float taxRate, float cost){
    taxRate = taxRate/100;
    cost += cost*taxRate;
    return cost;
}
int main (int argc, char **argv){
	float salesTax = 15;
    float itemCost = 25;
    float finalCost;
    finalCost = addTax(salesTax,itemCost);
    cout << "Final total for a $" << itemCost << " item at " << salesTax << "% sales tax is $" <<  finalCost << "." << endl;
	return 0;
}