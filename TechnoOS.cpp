    #include <iostream>
    #include <windows.h>
    using namespace std;

int main() {
    SetConsoleTitleA("TechnoOS");
    cout << "TechnoOS CoreDev v1.2 \n";
    cout << "Copyright 2022 Techno Corp. All Rights Reserved \n";
cout << "Enter help to show a list of commands \n";
            string cmd="", prog="";
            int usecmd=1;
            while (usecmd == 1 ) {
                cout << "TechnoOS>";
    std::getline (std::cin,cmd);
    // This checks what command it is
if (cmd == "help") {
    cout << "help shows the list of commands \n";
    cout << "run opens a program \n";
    cout << "ver shows the version of the OS\n";
    cout << "FileMan is the TechnoOS File Manager \n";
cout << "Exit exits the OS \n";
}

if (cmd == "ver") {
    cout << " TechnoOS CoreDev v1.2" << endl;
}
if (cmd == "run") {
    cout << "Enter the program you want to open or enter list to get a list of programs \n";
    cout << "Program Launcher>";
    std::getline (std::cin,prog);
    if (prog == "TechnoPad") {
        system("TechnoPad");
        }
        if (prog == "list") {
            cout << "TechnoPad: Is a notepad program \n";
            cout << "TechnoCalc: Is a calculator program \n";
            cout << "NGG: Is a number guessing game \n";
            cout << "You will need to open the Program Launcher again \n";
        }
            if (prog == "NGG") {
                system("Number");
            }
        
        if (prog == "TechnoCalc") {
       system("TechnoCalc");
        }
}
if (cmd == "FileMan")
system("FileMan.exe");

   if (cmd == "exit") {
 cout << "Thank you for using TechnoOS";
 break;
            }

}
            }
