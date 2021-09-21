#include <iostream>  // output to the screen //
#include <cmath>      //math calculations //
#include <iomanip>      //for setprecision & showpoint & fixed ///
#include <cfloat>       // for decimal points //

using namespace std;

int main()
{

    float billAmount;
    cout << fixed << showpoint;
    cout << "What is your bill amount?: " << endl;
    cin >> billAmount;
    cout << "The bill amount is: " << setprecision(2) << "$" << billAmount << endl;

    float tipRate;
    cout << "What is the tip rate?: " << endl;
    cin >> tipRate;
    cout << "The tip rate is: " << tipRate << endl;


    float totalTip;
    totalTip = billAmount * tipRate;
    cout << fixed << showpoint;
    cout << "The total tip is: " << setprecision(2) << "$" << totalTip << endl;


    float totalBillAmount;
    totalBillAmount = billAmount + totalTip;
    cout << "Your total bill equals to: " << setprecision(2) << "$" << totalBillAmount << endl;
}
