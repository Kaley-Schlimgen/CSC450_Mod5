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
    ifstream providedFile;
    string filePath = "/Users/kaleyschlimgen/Desktop/CSC450_CT5_mod5.txt";

    //open file
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
        cout << "Unable to open file";
        return 1;
    }
    
     
        return 0;
}
