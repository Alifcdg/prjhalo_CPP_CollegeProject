#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
  vector<string> guests;
  string name;
  char again = 'y';

  cout << "Enter guest names:\n";

  while (again == 'y' || again == 'Y') {
    cout << "Guest name: ";
    getline(cin, name);
    guests.push_back(name);

    cout << "Is there another guest? (y/n): ";
    cin >> again;
    cin.ignore();
  }

  cout << "Welcome, special guests of Jungjae Resort:\n";
  for (size_t i = 0; i < guests.size(); i++) {
    cout << i + 1 << ". " << guests[i] << endl;
  }

  return 0;
}
