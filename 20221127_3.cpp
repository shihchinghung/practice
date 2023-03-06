//用do...while計算1到100的偶數和。

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int num = 2;
    int sum = 0;
    do{
        sum += num;
        num += 2;
    }while(num<=100);
    cout << "sum = " << sum <<endl;
    return 0;
}