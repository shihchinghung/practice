//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int counter(char c, string s){
    int count = 0;
    for(char i : s){
        if(i==c){
            count++;
        }
    }
    return count;
}
int main(){
    char s[10];
    int i;
    int ans = 0;
    char I = 'I';
    char V = 'V';
    char X = 'X';
    char L = 'L';
    char C = 'C';
    char D = 'D';
    char M = 'M';
    cout << "s = ";
    cin >> s;
    ans = 1*counter(I, s) + 5*counter(V, s) + 10*counter(X, s) + 50*counter(L, s) + 100*counter(C, s) + 500*counter(D, s) + 1000*counter(M, s);
    for(i=0;i<sizeof(s);i++){
        if((s[i]==I && s[i+1]==V) || (s[i]==I && s[i+1]==X) || (s[i]==I && s[i+1]==L) || (s[i]==I && s[i+1]==C) || (s[i]==I && s[i+1]==D)
            || (s[i]==I && s[i+1]==M)){
            ans -= 2;
        }
        if((s[i]==V && s[i+1]==X) || (s[i]==V && s[i+1]==L) || (s[i]==V && s[i+1]==C) || (s[i]==V && s[i+1]==D) || (s[i]==V && s[i+1]==M)){
            ans -= 10;
        }
        if((s[i]==X && s[i+1]==L) || (s[i]==X && s[i+1]==C) || (s[i]==X && s[i+1]==D) || (s[i]==X && s[i+1]==M)){
            ans -= 20;
        }
        if((s[i]==L && s[i+1]==C) || (s[i]==L && s[i+1]==D) || (s[i]==L && s[i+1]==M)){
            ans -= 100;
        }
        if((s[i]==C && s[i+1]==D) || (s[i]==C && s[i+1]==M)){
            ans -= 200;
        }
        if((s[i]==D && s[i+1]==M)){
            ans -= 1000;
        }
    }
    cout << ans << endl;
    return 0;
}