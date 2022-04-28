#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Write string: ";
    getline(cin, s);
        for (int i = 0; i < s.size(); i ++) {
            s.erase(i, 1);
            s.erase(i, 1);
        }
    cout << "Result: " << s << endl;
    return 0;
}
