//Given a string s consisting of words and spaces, return the length of the last word in the string.

//A word is a maximal substring consisting of non-space characters only

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    string s;
    int i;
    char word[50];
    int count = 0;
    int count2 = 0;
    cout << "s = ";
    getline(cin, s);
    for(i=0;i<s.length();i++){
        if(s[i]!=' '){
            count++;
            word[i] = s[i];
            count2 = 0;
        }
        else if((s[i]==' ' && s[i+1]==NULL) || (s[i]==' ' && s[i+1]==' ')){
            count2++;
        }else{
            count = 0;
        }
    }
    cout << "The last word is '";
    for(i=s.length()-count-count2;i<s.length()-count2;i++){
        cout << word[i];
    }
    cout << "' ";
    cout << "with length " << count <<endl;
    return 0;
}