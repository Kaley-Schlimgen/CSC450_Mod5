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

    string userInput;
    ifstream providedFile;
    string filePath = "/Users/kaleyschlimgen/Desktop/CSC450_CT5_mod5.txt";
/*
    //open file and read contents of file
    providedFile.open(filePath);
    if (providedFile.is_open()) {
        cout << "File Opened Successfully\n";
        cout << "File Contents:\n";
        cout << "\n";
        string line;

        //read the file contents
        while (getline(providedFile, line)) {
            cout << line << endl;
            cout << endl;
        }
        providedFile.close();
    }
    else {
        cout << "Unable to open file";
        return 1;
    }
    */
        //append the file
        ofstream appendFile(filePath, ios::app);
        if (appendFile.is_open()) {
            
            cout <<"Enter input to add to file:\n";
            getline(cin, userInput);
            
            appendFile << "ADDED LINE:\n";
            appendFile << userInput << endl;
                
            appendFile.close();
            
            cout << endl;
            cout << "APPEND SUCCESSFUL\n";
            cout << endl;
        }
        else {
            cout <<"APPEND NOT SUCCESSFUL\n";
            return 1;
        }
    
    cout <<"Exiting Program\n";
    return 0;
}
