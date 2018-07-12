#include <iostream>
#include "Bubble_Sort.h"
#include "Quick_Sort.h"
#include "Selection_Sort.h"
#include <fstream>
using namespace std;
int main() {

    int *arr = new int[50000];
    int n = 0;
    string inputFileName = "SA_input_file_random_5000";
    inputFileName += ".txt";
    int tempInt = 0;

    /*
     * read ints from file to array begin
     */

    ifstream infile(inputFileName, ios::in); // inputFile.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"
    string str;
    if (infile.is_open()){
        while (getline(infile, str)) { // returns null when it reaches an empty line in the file
            arr[n] = stoi(str);;//write file to a vector of strings
            n++;
        }
        infile.close();
    }

    else {
        cout << "No input file available. Ensure filename matches input.";
        return 0;
    }

    /*
     * read ints from file to array end
     */


    //bubbleSort(arr, n);
    //quickSort(arr, 0, n - 1);
    //selectionSort(arr, n);



    //prints sorted array to file: "sorted.txt"
    int size = n;
    ofstream myfile;
    string sortedFileName = "sorted ";
    sortedFileName += inputFileName;
    myfile.open (sortedFileName);

    for (int i = 0; i < n; i++){
        myfile << arr[i];
        myfile << "\n";
    }

    myfile.close();

    return 0;
}