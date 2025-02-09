#include <iostream>
using namespace std;

int getAnIntFromTheUser();
void compareTwoInts(int x,int y);
int sumTwoInts(int x, int y);

int main() {
    cout << "Greetings User!" << endl;
    cout << "Today we are going to use functions to do the following!\n";
    cout << "Get an Int from you!\n";
    cout << "Compare those two Ints to each other\n";
    cout << "Sum the two ints together!\n";
    cout << "If you are ready lets begin!\n";

    int x = getAnIntFromTheUser();
    int y = getAnIntFromTheUser();
    compareTwoInts(x,y);
    sumTwoInts(x,y);
    return 0;
}

int getAnIntFromTheUser() {
    int x;
    cout << "Can you please input an integer?\n";
    cin >> x;
    return x;
}

void compareTwoInts(int x, int y) {
    if (x > y) {
        cout << "Wow your first number was larger than the second one!\n";
    }
    else if (x == y) {
        cout << "Huh...those numbers are exactly the same!\n";
    }
    else
        cout << "I see you made your second number larger than the first one!\n";
}

int sumTwoInts(int x, int y) {
    int final_sum = x + y;
    cout << "The sum of your two Ints is..." << final_sum << "\n";
    return 0;
}


