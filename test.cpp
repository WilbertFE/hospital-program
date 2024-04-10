#include <iostream>
using namespace std;

int main (){
    int angka[] = {24, 54, 56, 66, 43, 77, 83};
    int jmlh_arr = sizeof(angka) / sizeof(*angka);
    cout << jmlh_arr << endl;

    for(int a = 0; a < jmlh_arr; a++){
        cout << angka[a] << endl;
    }

    return 0;
}