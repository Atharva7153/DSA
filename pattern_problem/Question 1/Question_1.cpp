#include <iostream>
using namespace std;

int main (){
    int n = 4;
    for(int i = 0; i < n; i++){ //Outer loop

        for(int j = 1; j <= n; j++){ //inner Loop
            cout << j;
        }

        cout << endl;
    } 
}