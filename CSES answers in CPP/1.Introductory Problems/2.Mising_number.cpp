#include <iostream>
#include <vector>
using namespace std;

int main()  
{
    long long n, i, sumOne = 0, sumTwo  = 0;    
    cin >> n;

    vector<long long> numList(n-1);  // Dynamically sized array
    
    for(i= 0; i < n-1; i++){

        cin >> numList[i];
        sumOne += numList[i];

    }

    for(i= 1; i <= n; i++){

        sumTwo += i;

    }

    cout << sumTwo - sumOne;
    
    return 0;
}

