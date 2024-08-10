#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void printCharWithFreq(const string &str)
{
    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    for (const auto &entry : freq) {
        cout << entry.first << entry.second << " ";
    }
    cout << endl; // Print a newline at the end
}

int main()
{
    string str = "YASHOVARDHAN";
    printCharWithFreq(str);
    return 0;
}













