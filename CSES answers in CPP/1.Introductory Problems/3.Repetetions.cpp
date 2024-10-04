#include <iostream>
#include <string>
using namespace std;

int main()  
{
    long long maxCount = 0;  
    string line;
    
    // Read the entire line of letters
    getline(cin, line);

    char letterList[4] = {'A', 'C', 'G', 'T'};

    // Iterate through the letterList
    for (int j = 0; j < 4; j++) {
        long long count = 0; // Reset count for each letter
        for (size_t i = 0; i < line.length(); i++) {
            if (line[i] == letterList[j]) {
                count++; // Increment count for the current letter
                // Update maxCount if count exceeds maxCount
                if (count > maxCount) {
                    maxCount = count;
                }
            } else {
                count = 0; // Reset count if the letter changes
            }
        }
    }
    
    cout << maxCount << endl;  // Output the maximum count
    return 0;
}
