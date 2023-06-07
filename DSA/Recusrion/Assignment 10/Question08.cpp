#include <iostream>
using namespace std;

bool isConsonant(char a) {

    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            return false;
        }

        return true;
    }else{
        return false;
    }
}

void countConsonant(string s, int index, int &count) {
    if (index == s.size()) {
        return;
    }

    if (isConsonant(s[index])) {
        count++;
    }

    countConsonant(s, index + 1, count);
}

int main() {

    int count = 0;

    countConsonant("geeksforgeeks portal", 0, count);

    cout << count << endl;

    return 0;
}