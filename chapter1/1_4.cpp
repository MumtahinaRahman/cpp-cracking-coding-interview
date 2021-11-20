#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

bool checkPaliPermu(string s){
        int letters[26] = {0}; // hash table
        int total_chars = 0; // without spaces
        int even_reps = 0; // #repetitions of letters that are even
        int odd_reps;
        int unique_chars = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] != ' '){
                total_chars++;
                int j = s[i].upper.ascii() % 26;
                if(letters[j] == 1) unique_chars++;
                letters[j]++;
            }
        }

        for(int i=0; i<s.length(); i++){
            if(letters[i] > 0 && letters[i] % 2 == 0)
                even_reps++;
            else if(letters[i] % 2 == 1) 
                odd_reps++;
        }

        if(total_chars % 2 == 0){
            if(even_reps == unique_chars)
                return true;
            else
                return false;
        }

        else if(total_chars % 2 == 1){
            if(even_reps == unique_chars-1 && odd_reps == 1)
                return true;
            else
                return false;
        }
}

int main(){
    string s = "tact coa";
    checkPaliPermu(s);
    return 0;
}