
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> marks;
  
  marks["Ram"] = 85;
  marks["Sam"] = 90;
  marks["Tom"] = 78;

  for (auto const& [name, score] : marks) {
      cout << name << ": " << score << endl;
  }
  return 0;
}
