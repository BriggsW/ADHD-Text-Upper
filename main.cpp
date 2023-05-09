#include <iostream>
#include <fstream>
#include "Functions.h"
using namespace std;


int main() {
    ofstream outFS;
    ifstream inFS;
    string fileName, line;

    cout<<"Input txt file (ex \"Text File\"): ";
    getline(cin,fileName);
    cin.clear();

    inFS.open(fileName+".txt");
    fileName.append(" Upped");
    outFS.open(fileName+".txt");

    if ( !(inFS.is_open()) ){
        cout<<"Could not open file";
        return 1;
    }

    while ( !(inFS.eof()) ){
        getline(inFS, line);
        outFS<<UpLine(line);
    }
    cout<<"Translation Complete";


    return 0;
}
