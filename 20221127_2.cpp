//請利用while迴圈，要求使用者不斷輸入數字，直到輸入的數字為0時停止，試計算所輸入數字的總和與平均。

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    float num, avg;
    cout << "num = ";
    cin >> num;
    float sum = num;
    int count = 0;
    while(num!=0){
        cout << "num = ";
        cin >> num;
        sum += num;
        count++;
    }
    avg = sum/count;
    cout << "sum = " << sum <<endl;
    cout << "average = " << avg <<endl;
    return 0;
}