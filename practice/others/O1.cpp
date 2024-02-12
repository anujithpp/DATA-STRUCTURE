//rotate an array n position to clockwise and counterclockwise
//list distinct elements
//frequency table showing each element and its frequency

#include <iostream>

using namespace std;

void rotateClockwise(int arr[], int size, int n) {          //n is rotation to clockwise
    n = n % size;                                           //finding effective rotations
    for (int i = 0; i < n; i++) {
        int temp = arr[size - 1];

        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void rotateAntiClockwise(int arr[], int size, int o) {
    o = o % size;
    for (int i = 0; i < o; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void distinct(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << ",";
        }
    }
}


void frequency(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        cout << "    " << arr[i] << "            " << count << endl;
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[] = {6, 3, 1, 5, 9, 7, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n, o;
    cout << "Initial Array: ";
    display(arr, size);
    cout << endl;
    cout << "Size of Array: " << size << endl;
    cout << endl;

    cout << "Enter how much to rotate clockwise: ";
    cin >> n;
    cout << endl;
    cout << "After Rotation "<<n<<" position Clockwise: ";
    rotateClockwise(arr, size, n);
    display(arr, size);
    cout << endl;

    cout << endl;
    cout << "Enter how much to rotate AntiClockwise: ";
    cin >> o;
    cout << endl;
    cout << "After Rotating " <<o <<" position Anticlockwise: ";
    rotateAntiClockwise(arr, size, o);
    display(arr, size);
    cout << endl;

    cout << endl;
    cout << "Distinct elements: ";
    distinct(arr, size);
    cout << endl;

    cout << endl;
    cout << "    Frequency Table " << endl;
    cout << " Element " << "     frequency" << endl;
    frequency(arr, size);


    return 0;
}
