#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Function to calculate runtime
void calculateRuntime(int num) {
    auto start = high_resolution_clock::now(); // Start time

    long long result = factorial(num);

    auto end = high_resolution_clock::now(); // End time
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Factorial of " << num << " is: " << result << endl;
    cout << "Execution time: " << duration.count() << " microseconds" << endl;
    cout << "Estimated Time Complexity: O(N) (Recursive calls from " << num << " to 1)" << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Please enter a non-negative number." << endl;
    else
        calculateRuntime(num);

    return 0;
}
