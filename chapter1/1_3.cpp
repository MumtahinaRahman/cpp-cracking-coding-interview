#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
//#include <stdbits/c++.h>

using namespace std;

string urlify(string s, int n){
    char letters[s.length()];
    for(int i=0,j=0; i<n; i++,j++){
        if(s[i] != ' ') 
            letters[j] = s[i];//i=3
        else{
            letters[j] = '%';
            letters[j+1] = '2';
            letters[j+2] = '0';
            j = j+2; //j=5
        }      
    }
    return letters;
}

int main()
{   
    string s = "mr john smith    ";
    int n = 13;
    string url = urlify(s,n);
    cout <<"here is the url: "<< url <<endl;
    return 0;
}

// ****test cases****
// "smile laugh grin smirk"; 22
// "mr john smith    "; 13
// "smiley face  "; 11