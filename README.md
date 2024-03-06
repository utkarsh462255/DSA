Function
The function largestElement takes in a reference to a vector of integers arr and the size of the array n, and returns the largest element in the array.

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}



Usage
You can include this function in your C++ projects to find the largest element in an array.

#include <iostream>
#include <vector>

using namespace std;

// Include the function definition

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int largest = largestElement(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}


How to Use
1. Clone the repository to your local machine.
2. Include the largestElement function in your C++ project.
3. Pass a vector of integers and its size to the largestElement function.
4. Retrieve the largest element returned by the function and use it as needed.


Contributing
Contributions are welcome! If you find any issues or have suggestions for improvement, feel free to open an issue or create a pull request.
