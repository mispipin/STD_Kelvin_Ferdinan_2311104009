#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

string reverseWords(const string& input) {
  stack<char> charStack;
  stringstream ss(input);
  string word, result;

  while (ss >> word) {
    for (char ch : word) {
      charStack.push(ch);
    }
    
    while (!charStack.empty()) {
      result += charStack.top();
      charStack.pop();
    }
    result += " "; 
  }

  if (!result.empty()) {
    result.pop_back();
  }

  return result;
}

int main() {
  string input;
  cout << "Masukkan Kata: ";
  getline(std::cin, input);

  string reversedSentence = reverseWords(input);

  cout << "Datastack Array:\n";
  cout << "Data: " << reversedSentence << std::endl;

  return 0;
}