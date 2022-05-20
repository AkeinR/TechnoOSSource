#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <unistd.h>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::filesystem::directory_iterator;
using std::filesystem::current_path;
int main() {
    cout << "Enter cd if you want to view this directory or enter the directory path \n";
    cout << "ViewFile>";
    string path = " ";
    cin >> path;
    if(path != "cd") {
    for (const auto & file : directory_iterator(path))
        cout << file.path() << endl;
    } else {
     for (const auto & file : directory_iterator(current_path()))
        cout << file.path() << endl;
    }
    return 0;
}
