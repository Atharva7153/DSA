#include <iostream>
using namespace std;

int main (){
    int n = 10;
    for(int i = 0; i < n; i++){ //Outer loop
        char ch = 'A';
        for(int j = 1; j <= n; j++){ //inner Loop
            cout << ch;
            ch = ch + 1;
        }

        cout << endl;
    } 
}