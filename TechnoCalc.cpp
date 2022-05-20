#include <iostream>
using namespace std;

int main(){
    int first=0, second=0, loop=1;
    string dmas=" ";
    cout << "TechnoCalc v1.0 \n";
    cout << "Copyright 2022 Techno Corp. All Rights Reserved \n";
    while (loop==1) {
    cout << "Enter the operation (e.g. + - x / and enter exit to exit) \n";
    cin >> dmas;
        if (dmas == "exit") {
    return 0;
}
    cout << "Enter the first number (e.g. 0) \n";
    cin >> first;
    cout << "Enter the number you want to add/subtract/multiply/divide \n";
    cin >> second;
    if (dmas == "x") {
        int ans= first * second;
        cout << first <<" x " << second << " = " << ans << endl;
    }
    if (dmas == "/") {
        int ans= first / second;
        cout << first <<" / " << second << " = " << ans << endl;
    }
    if (dmas == "+") {
        int ans= first + second;
        cout << first <<" + " << second << " = " << ans << endl;
    }
    if (dmas == "-") {
        int ans= first - second;
        cout << first <<" - " << second << " = " << ans << endl;
    }

}
}