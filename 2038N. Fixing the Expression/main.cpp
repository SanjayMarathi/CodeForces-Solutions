#include <iostream>
#include <vector>
#include <string>
using namespace std;

string makeTrueExpression(string s) {
    char a = s[0];
    char op = s[1];
    char b = s[2];

    if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b)) {
        return s;
    }

    if (a < b) {
        return string(1, a) + "<" + string(1, b);
    } else if (a > b) {
        return string(1, a) + ">" + string(1, b);
    } else {
        return string(1, a) + "=" + string(1, b);
    }
}

int main() {
    int t;
    cin >> t;
    vector<string> expressions(t);
    for (int i = 0; i < t; ++i) {
        cin >> expressions[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << makeTrueExpression(expressions[i]) << endl;
    }

    return 0;
}
