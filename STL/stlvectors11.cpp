
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
  // Stack (Last In, First Out)
  stack<int> s;
  s.push(1); s.push(2); s.push(3);
  
  cout << "Stack: ";
  while (!s.empty()) {
      cout << s.top() << " ";
      s.pop();
  }
  cout << endl; // Output: 3 2 1

  // Queue (First In, First Out)
  queue<int> q;
  q.push(1); q.push(2); q.push(3);

  cout << "Queue: ";
  while (!q.empty()) {
      cout << q.front() << " ";
      q.pop();
  }
  cout << endl; // Output: 1 2 3

  return 0;
}
