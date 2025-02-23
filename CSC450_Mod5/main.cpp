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
    
    //ifstream originalFile (ifstream to read data streams from files)
    std::ifstream originalFile("CSC450_CT5_mod5.txt");
    //ofstream reversedFile (ofstream to write data streams to files)
    std::ofstream reversedFile("CSC450-mod5-reverse.txt");
    
    //error message (if originalFile doesn't open)
    if (!originalFile.is_open()) {
            cerr << "ERROR original file not opening \n";
            return 1;
        }
    
    //get contents of originalFile
    //create new string "fileContents" which is the contents of the first file

    
    //add reversal method
    
    //error message (if resersedFile doesn't open)
    if (!reversedFile.is_open()) {
            cerr << "ERROR reversal file not opening \n";
            return 1;
        }
    
    //save reversed contents to reversedFile
    
   
    cout <<"Exiting Program\n";
    return 0;
}
