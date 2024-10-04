#include <iostream>
#include <vector>
using namespace std;

int main()  
{
    long long n, moves = 0;    
    cin >> n;

    vector<long long> numList(n);  // Dynamically sized array
    
    // Input the array elements
    for(int i = 0; i < n; i++){
        cin >> numList[i];
    }

    // Traverse the array and ensure it is non-decreasing
    for(int i = 1; i < n; i++){
        if(numList[i] < numList[i-1]) {  // If the current element is smaller than the previous one
            moves += numList[i-1] - numList[i];  // Calculate the moves required
            numList[i] = numList[i-1];  // Make the current element equal to the previous one
        }
    }

    // Output the total number of moves
    cout << moves << endl;
    
    return 0;
}
