//請撰寫一程式，至多輸入十個整數，若輸入的值是偶數，則將它加總起來，若不是偶數，則結束迴圈。最後將總和印出。

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int num;
    int sum = 0;
    int i;
    for(i=0;i<10;i++){
        cout << "num = ";
        cin >> num;
        if(num%2!=0){
            break;
        }else{
            sum += num;
        }
    }
    cout << "sum = " << sum <<endl;
    return 0;
}