#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& input) {
  stack<char> charStack;
  string sanitizedInput;

  for (char ch : input) {
    if (isalnum(ch)) {
      sanitizedInput += tolower(ch);
    }
  }

  for (char ch : sanitizedInput) {
    charStack.push(ch);
  }

  string reversed;
  while (!charStack.empty()) {
    reversed += charStack.top();
    charStack.pop();
  }

  return sanitizedInput == reversed;
}

int main() {
  string input;
  cout << "Masukkan Kalimat: ";
  getline(cin, input);

  if (isPalindrome(input)) {
    cout << "Kalimat tersebut adalah Palindrom\n";
  } else {
    cout << "Kalimat tersebut adalah bukan Palindrom\n";
  }

  return 0;
}