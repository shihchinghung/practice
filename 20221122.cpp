//You are given the heads of two sorted linked lists list1 and list2.

//Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

//Return the head of the merged linked list.

#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
    int list;
    node *next;
};
class f{
    public:
        node *head;
        int num1, num2;
        void add();
        void show();
        f(){
            head = new node;
            head->next = NULL;
        }
};
void f::add(){
    node *current, *previous, *ptr;
    ptr = new node;
    cin >> ptr->list;
    previous = head;
    current = head->next;
    while(current!=NULL && current->list < ptr->list){
        previous = current;
        current = current->next;
    }
    ptr->next = current;
    previous->next = ptr;
}
void f::show(){
    node *current;
    current = head->next;
    cout << "[";
    while(current!= NULL){
        if(current->next == NULL){
            cout << current->list;
        }else{
            cout << current->list << ", ";
        }
        current = current->next;
    }
    cout << "]" << endl;
}
int main(){
    int i;
    f x;
    cout << "num of node: ";
    cin >> x.num1;
    cout << "list1 = ";
    for(i=0;i<x.num1;i++){
        x.add();
    }
    if(x.num1==0){
        cout << "[]" <<endl;
    }
    cout << "num of node: ";
    cin >> x.num2;
    cout << "list2 = ";
    for(i=0;i<x.num2;i++){
        x.add();
    }
    if(x.num2==0){
        cout << "[]" <<endl;
    }
    x.show();
    return 0;
}