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

        //append the file
        ofstream appendFile(filePath, ios::app);
        if (appendFile.is_open()) {
            
            cout <<"Enter input to add to file:\n";
            getline(cin, userInput);
            
            appendFile << "YOUR ADDED INPUT:\n";
            appendFile << userInput << endl;
                
            appendFile.close();
            
            cout << endl;
            cout << "APPEND SUCCESSFUL\n";
            cout << endl;
            cout << "CONTENT OF FILE: \n";
            cout << endl;
        }
        else {
            cout <<"APPEND NOT SUCCESSFUL\n";
            return 1;
        }
    
    //open file and print contents
        providedFile.open(filePath);
        
        if (providedFile.is_open()) {
            string line;
            
            //read the file contents
            while (getline(providedFile, line)) {
                cout << line << endl;
            }

            providedFile.close();
        }
        else {
            cout << "Unable to open original provided file";
            return 1;
        }
    
    
    
    cout << endl;
    cout <<"Exiting Program\n";
    return 0;
}
