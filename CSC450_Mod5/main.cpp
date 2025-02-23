/*
 *  main.cpp
 *  CSC450_Mod5
 *
 *  Created by Kaley Schlimgen on 2/22/25.
 *
 * Program:
 * Create a C++ program that will obtain input from a user.
 * Append the user's input into the provided .txt file.
 * Create a reversal method that reverses all of the characters in
 *      the provided .txt file.
 * Store the result in a new .txt file.
 *
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string userInput;
    string filePath = "/Users/kaleyschlimgen/Desktop/CSC450_CT5_mod5.txt";

    //Open provided file in append mode
    ofstream appendFile(filePath, ios::app);
    if (appendFile.is_open()) {
        
        //Get user input
        cout <<"Enter input to add to file:\n";
        getline(cin, userInput);
          
        //Add user input to file
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
    
    
    //Open providedFile
    ifstream providedFile(filePath);
    string fileContents;
    string line;

    if (providedFile.is_open()) {
        //copy providedFile's contents to string fileContents
        //print the file contents in the IDE output
        while (getline(providedFile, line)) {
            fileContents += line + '\n';
            cout << line << endl;
        }
        providedFile.close();
    }
    else {
        cout << "Unable to open original provided file";
        return 1;
    }

    
    //Create a reversal method for the characters
    cout << endl;
    cout << "REVERSING CHARACTERS\n";

    size_t length = fileContents.length();
    for (size_t i = 0; i < length / 2; i++) {
        char tempCharacter = fileContents[i];
        fileContents[i] = fileContents[length - 1 - i];
        fileContents[length - 1 - i] = tempCharacter;
    }
    
    
    cout << endl;
    cout << "TRANSFERING CONTENT TO NEW FOLDER\n";
    
    //Open reversedFile
    string filePath2 = "/Users/kaleyschlimgen/Desktop/CSC450-mod5-reverse.txt";
    ofstream reversedFile(filePath2);
    
    //Move the fileContents string to the new reversedFile
    if (reversedFile.is_open()) {
        reversedFile << fileContents;
        cout << endl;
        cout << "TRANSFER SUCCESSFUL\n";
        cout << endl;
        reversedFile.close();
    }
    else {
        cout << "Unable to open reversed file";
        return 1;
    }
    
    cout << endl;
    cout <<"Exiting Program\n";
    return 0;
}
