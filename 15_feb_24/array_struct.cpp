#include <bits/stdc++.h>
using namespace std;

// custom dataType array
typedef struct Array
{
    int size;
    int *arr;
} Array;

// constructor function to create array
Array createArray(int size)
{
    // create array
    Array arr;

    // initialize data members
    arr.size = size;
    arr.arr = new int[size];

    // return our array
    return arr;
}

// function to print array
void print(Array &array)
{
    for (int idx = 0; idx < array.size; idx++)
    {
        cout << array.arr[idx] << " ";
    }

    cout << endl;
}

// swap -> give two index to function which will swap value at that two indices
void swap(Array &array, int idx1, int idx2)
{
    int size = array.size;

    try
    {
        // index out of bound
        if (!(min(idx1, idx2) >= 0 && max(idx1, idx2) < size))
        {
            throw runtime_error("Exception :: Array index out of bound");
        }

        // swap
        swap(array.arr[idx1], array.arr[idx2]);
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }
}

// min -> find mininum element of array
int minElement(Array &arr)
{
    try
    {
        if (arr.size == 0)
        {

            throw runtime_error("Error :: array is empty");
        }

        int mini = arr.arr[0];

        for (int idx = 0; idx < arr.size; idx++)
        {
            mini = min(arr.arr[idx], mini);
        }

        return mini;
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
        exit(1);
    }
}

// max -> find maximum element of array
int maxElement(Array &arr)
{
    try
    {
        if (arr.size == 0)
        {
            throw runtime_error("Error :: array is empty");
        }

        int maxi = arr.arr[0];

        for (int idx = 0; idx < arr.size; idx++)
        {
            maxi = min(arr.arr[idx], maxi);
        }

        return maxi;
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;

        exit(1);
    }
}

// sum -> find sum of all elements of array
int accumulate(Array &arr)
{
    int sum = 0;

    for (int idx = 0; idx < arr.size; idx++)
    {
        sum += arr.arr[idx];
    }

    return sum;
}

// fill -> fill all the elments of array with the given value
void fill(Array &array, int filler)
{
    for (int idx = 0; idx < array.size; idx++)
    {
        array.arr[idx] = filler;
    }
}

int main()
{
    Array myarr = createArray(10); // initialization

    int choice = 0;

    cout << "1.print array\n"
            "2.swap elements\n"
            "3.min element\n"
            "4.max element\n"
            "5.sum of all elements\n"
            "6.fill all elements\n"
            ""
         << endl;

    while (choice != 9)
    {
        cout << "Enter choice or 9 to exit : ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            print(myarr);

            break;

        case 2:
            int idx1, idx2;

            cout << "Enter index 1 , index 2 : ";

            cin >> idx1, idx2;

            swap(myarr, idx1, idx2);

            break;

        case 3:
            minElement(myarr);

            break;

        case 4:
            maxElement(myarr);

            break;

        case 5:
            accumulate(myarr);

            break;

        case 6:
            int filler;

            cout << "Enter filler : ";

            cin >> filler;

            fill(myarr, filler);

            break;

        default:
            break;
        }

        cout << endl;
    }

    return 0;
}