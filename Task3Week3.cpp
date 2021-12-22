    #include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int first, second, third, fourth;
    // num <= 9999  -> [1000, 9999]
    // това беше излишна проверка, може директно да проверим така
    if (num >= 1000 && num <= 9999) {
        fourth = num % 10; 
        num /= 10;
        third = num % 10;
        num /= 10;
        second = num % 10;
        first = num / 10;

        bool hasUniqueDigits =  (first != second) && 
                                (second != third) &&
                                (third != fourth) && 
                                (fourth != first) &&
                                (first != third)  &&
                                (second != fourth);
    
        if (hasUniqueDigits) {
            cout << "YES, all the numbers are different!" << endl;
        } else {
            cout << "NO, not all numbers are different!" << endl;
        }
    } else {
        cout << "Number is not 4 digits" << endl;
    }
}