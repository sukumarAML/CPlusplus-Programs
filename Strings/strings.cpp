#include <iostream>
#include <string>
#include <algorithm> // For string manipulation functions

using namespace std;

int main() {
  string str = "  Hello, World!  ";

  // 1. Length
  cout << "String length: " << str.length() << endl;

  // 2. Concatenation
  string str2 = " C++";
  string combinedString = str + str2;
  cout << "Concatenated string: " << combinedString << endl;

  // 3. Substring
  cout << "Substring (from index 7): " << str.substr(7) << endl;
  cout << "Substring (from index 0 to 5): " << str.substr(0, 5) << endl;

  // 4. Compare
  string str3 = "Hello";
  cout << "Comparing 'Hello' and '" << str << "': " << str.compare(str3) << endl; // Returns 0 if equal, < 0 if str < str3, > 0 if str > str3

  // 5. Find
  size_t pos = str.find("World");
  if (pos != string::npos) {
    cout << "Found 'World' at position: " << pos << endl;
  } else {
    cout << "'World' not found in the string." << endl;
  }

  // 6. Replace
  string replacedString = str.replace(0, 2, "Greetings");
  cout << "Replaced string: " << replacedString << endl;

  // 7. Erase
  string erasedString = str.erase(7, 5); // Erase 5 characters starting at index 7
  cout << "Erase string: " << erasedString << endl;

  // 8. To Lowercase / Uppercase
  string lowercaseStr = str.transform(str.begin(), str.end(), [](unsigned char c){ return tolower(c); });
  cout << "Lowercase string: " << lowercaseStr << endl;

  string uppercaseStr = str.transform(str.begin(), str.end(), [](unsigned char c){ return toupper(c); });
  cout << "Uppercase string: " << uppercaseStr << endl;

  // 9. Reverse
  string reversedStr = str;
  reverse(reversedStr.begin(), reversedStr.end());
  cout << "Reversed string: " << reversedStr << endl;

  // 10. Trim (Remove leading and trailing whitespace) - Not directly available in string
  //    You would need to use a function like trim() from a string library or write your own.
  //    This is left as an exercise to demonstrate the concept.


  return 0;
}

