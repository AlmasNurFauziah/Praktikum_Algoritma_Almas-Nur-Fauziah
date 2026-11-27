#include <iostream>
using namespace std;

int main() {
    int usia;
    int berat;
    cin >> usia >> berat;
    if (usia >= 17 && berat >= 45){
        cout << "LAYAK";

}else {
        cout << "TIDAK LAYAK";
    }

    return 0;
}
