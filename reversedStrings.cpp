#include <iostream>
using namespace std;
int main() {
//Declare a variable to store the word
    string user_word;

    cout << "Hey! Please input a word and I will reverse it!" << endl;
    cin >> user_word;

//Get the length of the users word to use in a loop
    int word_length = user_word.length();

//For loop which will print each letter on the same line starting from the last letter
    for (int i = word_length - 1; i >= 0; i--) {
        cout << user_word[i];
    }
    cout << "\n";

    return 0;
}