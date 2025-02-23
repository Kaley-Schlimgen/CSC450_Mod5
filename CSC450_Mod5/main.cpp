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
    
    //ifstream originalFile (bc...)
    //ofstream reversedFile (bc...)
    
    //get contents of originalFile
    
    //add reversal method
    
    //save reversed contents to reversedFile
    
   
    cout <<"Exiting Program\n";
    return 0;
}
