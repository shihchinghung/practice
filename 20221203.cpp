/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
The returned integer should be non-negative as well.*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num, ans;
    cout << "num = ";
    cin >> num;
    ans = round(sqrt(num));
    cout << "ans = " << ans << endl;
    cout << "The square root of " << num << " is " << sqrt(num) << ", so we return " << ans;
    return 0;
}