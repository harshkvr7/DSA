#include <bits/stdc++.h>

using namespace std;

template <typename T>

class Array
{
private:
    size_t size;
    T *arr;

public:
    Array(int size)
    {
        // this -> pointer to the current object
        this->size = size;
        this->arr = new T[size];
    }

    // methods

    // method to get size of array
    size_t sz()
    {
        size_t val = size;

        return val;
    }

    // function to print array
    void print()
    {
        for (int idx = 0; idx < size; idx++)
        {
            cout << arr[idx] << " ";
        }

        cout << endl;
    }

    // swap -> give two index to function which will swap value at that two indices
    void swap(int idx1, int idx2)
    {
        try
        {
            // index out of bound
            if (!(min(idx1, idx2) >= 0 && max(idx1, idx2) < size))
            {
                throw runtime_error("Exception :: Array index out of bound");
            }

            // swap
            swap(arr[idx1], arr[idx2]);
        }
        catch (exception &e)
        {
            cerr << e.what() << endl;
        }
    }

    // min -> find mininum element of array
    int minElement()
    {
        try
        {
            if (size == 0)
            {
                throw runtime_error("Error :: array is empty");
            }

            int mini = arr[0];

            for (int idx = 0; idx < size; idx++)
            {
                mini = min(arr[idx], mini);
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
    int maxElement()
    {
        try
        {
            if (size == 0)
            {
                throw runtime_error("Error :: array is empty");
            }

            int maxi = arr[0];

            for (int idx = 0; idx < size; idx++)
            {
                maxi = max(arr[idx], maxi);
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
    int accumulate()
    {
        int sum = 0;

        for (int idx = 0; idx < size; idx++)
        {
            sum += arr[idx];
        }

        return sum;
    }

    // fill -> fill all the elments of array with the given value
    void fill(T filler)
    {
        for (int idx = 0; idx < size; idx++)
        {
            arr[idx] = filler;
        }
    }
};

int main()
{
    Array<int> arr(10); // initialization

    int choice = 0;

    cout << "1.size of array\n"
            "2.print array\n"
            "3.swap elements\n"
            "4.min element\n"
            "5.max element\n"
            "6.sum of all elements\n"
            "7.fill array\n"
         << endl;

    while (choice != 9)
    {
        cout << "Enter choice or 9 to exit : ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Size of array is : " << arr.sz();

            break;

        case 2:
            arr.print();

            break;

        case 3:
            int idx1, idx2;

            cout << "Enter index 1 : ";

            cin >> idx1;

            cout << "Enter index2 : ";

            cin >> idx2;

            arr.swap(idx1, idx2);

            break;

        case 4:
            cout << arr.minElement();

            break;

        case 5:
            cout << arr.maxElement();

            break;

        case 6:
            cout << arr.accumulate();

            break;

        case 7:
            int filler;

            cout << "Enter filler : ";

            cin >> filler;

            arr.fill(filler);

            break;

        default:
            break;
        }

        cout << endl;
    }

    return 0;
}