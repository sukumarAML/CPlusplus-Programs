#include <iostream>
#include <string>

using namespace std;

int main() {
  // This is a single-line comment.  It's used for explaining code.
  cout << "// This is a single-line comment." << endl;

  /*
   * This is a multi-line comment.
   * It can span multiple lines.
   * It's often used for longer explanations or to disable a block of code
   * temporarily.
   */
  cout << "/* This is a multi-line comment." << endl;
  cout << "  It can span multiple lines." << endl;
  cout << "  It's often used for longer explanations or to disable a block of code" << endl;
  cout << "  temporarily. */" << endl;


  // A C++ comment is used for comments within the code.
  //  This is another example of a single-line comment.
  cout << "// C++ comments are commonly used to add notes." << endl;

  /*
   * This is a comment inside a function.  It's useful
   * for documentation or disabling the function temporarily.
   */
  void my_function() {
    // This function does something.
    cout << "Inside my_function()" << endl;
  }

  my_function();


  // You can also use comments to mark the beginning or end of a section
  // of code for better organization.
  /*
  // This section is for calculating the area of a rectangle.
  double length = 5.0;
  double width = 3.0;
  double area = length * width;
  cout << "Area: " << area << endl;
  */


  cout << "Program finished." << endl;

  return 0;
}

