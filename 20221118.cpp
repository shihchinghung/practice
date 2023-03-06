//Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x;
    int num[10];
    int num2[10];
    int i;
    int count = 0;
    int mul = 1;
    int result = 1;
    cout << "x = ";
    cin >> x;
    int n = x;
    if(x>0){
        while(n>0){
            n = n/10;
            count++;
        }
        int j = count-1;
        for(i=0;i<count;i++){
            num[i] = num2[j] = x/mul%10;
            mul = mul*10;
            j--;
        }
        for(i=0;i<count;i++){
            if(num2[i] != num[i]){
                result = 0;
            }
        }
        if(result==0){
            cout << "false" <<endl;
        }else{
            cout << "true" <<endl;
        }
    }else{
        cout << "false" <<endl;
    }
    return 0;
}