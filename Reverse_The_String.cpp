#include<bits/stdc++.h>
using namespace std;
string reverseString(string str){   //function to reverse the words
    stringstream ss(str);
    vector<string> words;   //Vector to store the words
    string temp;    //temporary variable to store the words
    while(ss>>temp){    //Reading each words and storing into vector
        words.push_back(temp);
    }
    for(int i = 0;i<words.size();i++){
        reverse(words[i].begin(),words[i].end());
    }
    string rev = "";
    for(int i = 0;i < words.size(); i++){
        rev += words[i] + " ";
    }
    rev.pop_back();    // Removing the extra space at the end
    reverse(rev.begin(), rev.end());  //Reversing the entire sentence
    return rev;
}
int main(){     //Driver's Code
string str = "Hey! Its me Khuzaym.";
string rev = reverseString(str);    //function call
cout<< rev;
return 0;
}

// Output: "Khuzaym me Its Hey!"