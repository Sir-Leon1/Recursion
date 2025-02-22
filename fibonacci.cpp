#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Recursive function to generate Fibonacci series
void fibonacci(int a, int b, int n) {
    if (a > n) return;
    cout << a << " ";
    fibonacci(b, a + b, n);
}

// Function to calculate runtime
void calculateRuntime(int num) {
    auto start = high_resolution_clock::now(); // Start time

    cout << "Fibonacci series up to " << num << ": ";
    fibonacci(0, 1, num);
    cout << endl;

    auto end = high_resolution_clock::now(); // End time
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds" << endl;
    cout << "Estimated Time Complexity: O(N) (Number of Fibonacci terms up to " << num << ")" << endl;
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
