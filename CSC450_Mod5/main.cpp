//
//  main.cpp
//  CSC450_Mod5
//
//  Created by Kaley Schlimgen on 2/22/25.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    char userInput;
    ifstream providedFile;
    string filePath = "/Users/kaleyschlimgen/Desktop/CSC450_CT5_mod5.txt";

    //open file and read contents of file
    providedFile.open(filePath);
    if (providedFile.is_open()) {
        cout << "File Opened Successfully\n";
        cout << "File Contents:\n";
        string line;

        //read the file contents
        while (getline(providedFile, line)) {
            cout << line << endl;
            
        }

        providedFile.close();
    }
    else {
        cout << "Unable to open file";
        return 1;
    }
    
    cout << "Enter 'a' to append the file (enter any other character to quit)\n";
    cin >> userInput;
    
    while (userInput == 'a') {
        //append the file
        ofstream appendFile(filePath, ios::app);
        if (appendFile.is_open()) {
            appendFile << "ADDED LINE\n";
            appendFile.close();
            cout << "APPEND SUCCESSFUL\n";
        }
        else {
            cout <<"APPEND NOT SUCCESSFUL\n";
            return 1;
        }
   
        cout << "Enter 'a' to append the file (enter any other character to quit)\n";
        cin >> userInput;
    }
    
    cout <<"Exiting Program\n";
    return 0;
}
