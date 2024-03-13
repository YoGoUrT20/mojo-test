#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    auto start_time = high_resolution_clock::now();

    for (long long i = 1; i <= 1000000000000; ++i) {
        // А
    }

    auto end_time = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end_time - start_time);
    cout << "Time taken to count till 1 billion: "
         << duration.count() / 1000.0 << " seconds" << endl;

    cout << "Press Enter to exit...";
    cin.get(); // Wait for the user to press Enter

    return 0;
}
