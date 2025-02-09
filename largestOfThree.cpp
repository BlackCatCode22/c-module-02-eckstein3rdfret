#include <iostream>
using namespace std;

void compareThreeInts(int x,int y,int z);


int main() {

    int x,y,z;

    cout << "Please input 3 different integers!" << "\n";
    cin >> x;
    cin >> y;
    cin >> z;
    compareThreeInts(x,y,z);



    return 0;
}

void compareThreeInts(int x, int y, int z) {

    if (x > y) {
        cout << x << " Is larger than " << y <<"\n" ;
        if (y > z) {
            cout << y << " is larger than " << z << "\n";
            cout << x << " is larger than " << z << "\n";
        }
        if (y == z) {
            cout  << y << " is the same as " << z <<"\n";
        }
        if (y < z) {
            cout << y << " is less than " << z<< "\n";
        }
    }
    if (x == y) {
        cout << x << " Is the same as " << y <<"\n";
        if (y > z) {
            cout << y << " is larger than " << z << "\n";
        }
        if (y == z) {
            cout << y << " Is the same as " << z << "\n";
        }
        if (y < z) {
            cout << y << " Is less than " << z << "\n";
        }
    }
    if (x < y) {
        cout << x << " Is less than " << y << "\n";
        if (y > z) {
            if (x > z) {
                cout << z << " Is less than " << x << "\n";
            }
            if (x < z) {
                cout << z << " Is larger than " << x << "\n";
            }
        }
        if (y == z) {
            cout << y << " is the same as " << z << "\n";
        }
        if (y < z) {
            cout << y << " is less than " << z << "\n";
            if (x > z) {
                cout << x << " is greater than " << z << "\n";
            }
            if (x < z) {
                cout << x << " is less than " << z << "\n";
            }
        }
    }

}
