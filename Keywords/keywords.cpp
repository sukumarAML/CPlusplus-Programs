#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For sorting

using namespace std;

int main() {
  // Vector of keywords
  vector<string> keywords = {
      "for", "while", "if", "else", "switch", "case", "break", "continue",
      "int", "float", "double", "char", "string", "bool", "void", "return",
      "class", "public", "private", "protected", "new", "delete", "const",
      "auto", "inline", "static", "volatile", "template", "struct", "union",
      "enum", "namespace", "using", "iostream", "cout", "cin", "endl",
      "string", "vector", "fixed", "setprecision", "fabs", "abs", "pow", "sqrt"
  };

  // Sort the keywords alphabetically
  sort(keywords.begin(), keywords.end());

  cout << "List of Keywords:" << endl;
  for (const string& keyword : keywords) {
    cout << "- " << keyword << endl;
  }

  // Example: Search for a keyword
  string searchKeyword;
  cout << "\nEnter a keyword to search for (or type 'exit' to quit): ";
  cin >> searchKeyword;

  if (searchKeyword == "exit") {
    cout << "Exiting program." << endl;
  } else {
    bool found = false;
    for (const string& keyword : keywords) {
      if (keyword == searchKeyword) {
        cout << "Keyword '" << keyword << "' found!" << endl;
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "Keyword '" << searchKeyword << "' not found in the list." << endl;
    }
  }

  return 0;
}

