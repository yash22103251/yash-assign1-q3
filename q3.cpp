 #include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int start = 0;
    int end = input.length() - 1;

    while (start < end) {
        swap(input[start], input[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << input << endl;
    return 0;
}
