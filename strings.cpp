#include <iostream>
using namespace std;
//start
string getStr(){
  cout << "Enter string: ";
  string str;
  cin >> str;
  return str;
}

int allUnique(string s){ // 1 - yes; 0 - no
    int len = s.size();
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(s[i] == s[j] && i != j) return 0;
        }
    }
    return 1;
}

int areAnagrams(string s1, string s2){ // 1 -yes ; 0 -no
    if(s1.size() != s2.size()) return 0;
    int len = s1.size();
    int charCountS1 = 0;
    int charCountS2 = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(s1[i] == s1[j]) charCountS1++;
        }
        for(int j = 0; j < len; j++){
            if(s1[i] == s2[j]) charCountS2++;
        }
        if(charCountS1 != charCountS2) return 0;
    }
}


int main(){
    if(areAnagrams("pew","wep")) cout << "+\n";
    else cout << "-\n";
    return 0;
};
