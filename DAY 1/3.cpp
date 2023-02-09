#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter an alphabet ";
    cin >> c;

    bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    bool isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      printf("Non-alphabetic character");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel";
    else
        cout << c << " is a consonant";

    return 0;
}