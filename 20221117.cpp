/*Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int num[100];
    int size;
    int target;
    int i, j;
    int difference;
    int result = 0;
    cout << "The size of the array: ";
    cin >> size;
    for(i=0;i<size;i++){
        cout << "num[" << i << "]: ";
        cin >> num[i];
    }
    cout << "The target: ";
    cin >> target;
    for(i=0;i<size;i++){
        difference = target - num[i];
        for(j=i+1;j<size;j++){
            if(difference==num[j]){
                cout << "[" << i << ", " << j << "]";
                result = 1;
            }
        }
    }
    if(result==0){
        cout << "no solution";
    }
    return 0;
}