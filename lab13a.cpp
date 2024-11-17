#include <iostream>
#include <string>
using namespace std;

void printFiltered(int minVotes, int maxVotes, string states[], int votes[]);

int main() {
  string states[] = {"Alabama",        "Alaska",         "Arizona",
                     "Arkansas",       "California",     "Colorado",
                     "Connecticut",    "Delaware",       "District of Columbia",
                     "Florida",        "Georgia",        "Hawaii",
                     "Idaho",          "Illinois",       "Indiana",
                     "Iowa",           "Kansas",         "Kentucky",
                     "Louisiana",      "Maine",          "Maryland",
                     "Massachusetts",  "Michigan",       "Minnesota",
                     "Mississippi",    "Missouri",       "Montana",
                     "Nebraska",       "Nevada",         "New Hampshire",
                     "New Jersey",     "New Mexico",     "New York",
                     "North Carolina", "North Dakota",   "Ohio",
                     "Oklahoma",       "Oregon",         "Pennsylvania",
                     "Rhode Island",   "South Carolina", "South Dakota",
                     "Tennessee",      "Texas",          "Utah",
                     "Vermont",        "Virginia",       "Washington",
                     "West Virginia",  "Wisconsin",      "Wyoming"};
  int votes[] = {9,  3,  10, 6,  55, 9, 7,  3,  3,  27, 15, 4, 4,
                 21, 11, 7,  6,  8,  9, 4,  10, 12, 17, 10, 6, 11,
                 3,  5,  5,  4,  15, 5, 31, 15, 3,  20, 7,  7, 21,
                 4,  8,  3,  11, 34, 5, 3,  13, 11, 5,  10, 3};
  int minVotes, maxVotes;
  cout << "Min Electoral Votes: ";
  cin >> minVotes;
  cout << "Max Electoral Votes: ";
  cin >> maxVotes;
  cin.ignore(255, '\n');
  printFiltered(minVotes, maxVotes, states, votes);
  return 0;
}

void printFiltered(int minVotes, int maxVotes, string states[], int votes[]) {
  for (int x = 0; x < 51; x++) {
    if (votes[x] >= minVotes && votes[x] <= maxVotes) {
      cout << states[x] << ": " << votes[x] << endl;
    }
  }
}
