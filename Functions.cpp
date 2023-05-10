//
// Created by Caitlyn Briggs on 5/5/23.
//

#include "Functions.h"
#include <cstring>
#include <iostream>
using namespace std;

string UpLine(const string& line){
    int wordLength=0;
    int wordStart=0;
    string word, returnString;

    for (int i=0;i<line.length()+1;i++){
        if ( (line[i]!=' ') && (i<line.length()) ){
            word.push_back(line[i]);
        }
        else{
            int overHalf=(word.length()/2)+(word.length()%2);
            for (int j=0;j<overHalf;j++){
                if ( isalpha(word[j]) && word[j]>96){
                    word[j]-=32;
                }
            }
            returnString+=word+" ";
            word="";

        }
    }
    returnString;
    return returnString+"\n";
}