#include<iostream> 
#include<string>
using namespace std; 

bool checkPalindrome(string &str, int i){
    if(i>=str.length()/2) return true;
    if(str[i] != str[(str.length()-1)-i]) return false;
    checkPalindrome(str,++i);
}   

int main() 
 { 
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    if(checkPalindrome(str,0)) cout<< "\n String is a palindrome.";
    else cout <<"\n Not a palindrome.";
 
    return 0; 
}