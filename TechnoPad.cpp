#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "TechnoPad v1.0 \n";
    cout << "Copyright 2021 Techno Corp. All Rights Reserved \n";
    cout << "Enter exit to exit \n";
    string line ="", fans="", ext=".txt";
    int loop=1;
    ofstream myfile;
    cout << "Enter the name of the file you want to create/open " << "\n" << "WARNING: opening a file will overwrite it \n";
    std::getline(cin,fans);
    string fname= fans + ext;
    std::ofstream outfile (fname);
      myfile.open (fname);
      cout << "You have opened/created the document start typing. \n";
    while (loop==1){
    std::getline(cin,line);
    if (line != "exit") {
      myfile << line << endl;
    }
    if (line=="exit") {
        myfile.close();
break;
}
}
}