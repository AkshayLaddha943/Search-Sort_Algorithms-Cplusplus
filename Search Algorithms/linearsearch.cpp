#include <iostream>
using namespace std;

int LinearSearch (int arr[], int startindex, int endindex, int val) {
    //Iterating from start index to end index to search for the value
    for (int i= startindex; i<endindex; i++) {
        if (arr[i] == val) {
            return i;
        }
    }
    //return -1 if no val found
    return -1;
}

int main () {
    int arr[] = {43, 21, 17, 56, 73, 136, 65, 89, 44};
    int arrsize = sizeof(arr)/sizeof(*arr);

    int searchvalue = 65;

    int i = LinearSearch(arr, 0, arrsize - 1, searchvalue);

    if (i!= -1) {
        cout<<searchvalue<<" is found at index";
        cout<<i<<endl;
    }
    else {
        cout<<searchvalue<<" could not be found";
    }

    return 0;
}

//Best case scenario: O(1) value found at zeroeth index
//Worst case scenario: O(N)