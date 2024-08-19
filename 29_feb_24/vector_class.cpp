#include <iostream>

using namespace std;

template <typename vecType>
class vector
{
    size_t vecCapacity; // size of vector in memory
    size_t vecSize;     // elements stores in vector
    vecType *vecArr;    // array pointer

public:
    // vector declaration
    vector()
    {
        vecSize = 0;
        vecCapacity = 0;

        vecArr = new vecType[vecCapacity];
    }

    // vector initialization
    vector(size_t new_capacity, vecType filler = 0)
    {
        vecSize = new_capacity;
        vecCapacity = new_capacity;

        vecArr = new vecType[new_capacity];

        for (int idx = 0; idx < new_capacity; idx++)
        {
            vecArr[idx] = filler;
        }
    }

    size_t size()
    {
        return vecSize;
    }

    size_t capacity()
    {
        return vecCapacity;
    }

    // print the vector
    void print()
    {
        for (int idx = 0; idx < vecSize; idx++)
        {
            cout << vecArr[idx] << " ";
        }

        cout << endl;
    }

    // insert element at end of the array
    void push_back(vecType value)
    {
        try
        {
            if (vecSize == vecCapacity)
            {
                if (vecCapacity == 0)
                {
                    vecCapacity = 1;
                }
                else
                {
                    vecCapacity = vecCapacity * 2;
                }

                vecType *newVecPtr = new vecType[vecCapacity];

                for (int idx = 0; idx < vecSize; idx++)
                {
                    newVecPtr[idx] = vecArr[idx];
                }

                delete[] vecArr;

                vecArr = newVecPtr;
            }

            vecArr[vecSize] = value;

            vecSize++;
        }
        catch (...)
        {
            cerr << "Error : cant add element" << endl;
        }
    }

    // delete element at the end of vector
    vecType pop_back()
    {
        try
        {
            if (vecSize == 0)
            {
                throw runtime_error("Error : vector already empty");
            }

            vecType value = vecArr[vecSize - 1];

            vecSize--;

            return value;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';

            exit(1);
        }
    }

    // sum of all elements in the array
    vecType accumulate()
    {
        vecType sum = 0;

        for (int idx = 0; idx < vecSize; idx++)
        {
            sum += vecArr[idx];
        }

        return sum;
    }

    // minimum element of the vector
    vecType minEle(int start_idx, int end_idx)
    {
        vecType Ele = vecArr[0];

        try
        {
            if (!(min(start_idx, end_idx) >= 0 && max(start_idx, end_idx) < vecSize))
            {
                throw runtime_error("Error : index out of bound while findind min element");
            }

            for (int idx = 0; idx < vecSize; idx++)
            {
                if (vecArr[idx] <= Ele)
                {
                    Ele = vecArr[idx];
                }
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        return Ele;
    }

    // maximum element of the vector
    vecType maxEle(int start_idx, int end_idx)
    {
        vecType Ele = vecArr[0];

        try
        {
            if (!(min(start_idx, end_idx) >= 0 && max(start_idx, end_idx) < vecSize))
            {
                throw runtime_error("Error : index out of bound while findind min element");
            }

            for (int idx = 0; idx < vecSize; idx++)
            {
                if (vecArr[idx] >= Ele)
                {
                    Ele = vecArr[idx];
                }
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        return Ele;
    }

    // reverse the vector
    void reverse(int startIdx, int endIdx)
    {
        try
        {
            // index out of bound
            if (!(min(startIdx, endIdx) >= 0 && max(startIdx, endIdx) < vecSize))
            {

                throw runtime_error("Error :  index out of bound while reversing");
            }

            // reverse
            while (startIdx <= endIdx)
            {

                swap(vecArr[startIdx], vecArr[endIdx]);

                startIdx++;
                endIdx--;
            }
        }
        catch (const std::exception &e)
        {

            std::cerr << e.what() << '\n';
        }
    }

    // insert element at required index
    void insertEle(int index, vecType value)
    {
        try
        {
            if (index < 0 || index > vecSize)
            {
                throw runtime_error("Error : Index out while inserting element");
            }

            // insert at end
            push_back(value);

            // shift all elements
            for (int idx = vecSize - 1; idx > index; idx--)
            {
                vecArr[idx] = vecArr[idx - 1];
            }

            vecArr[index] = value;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    // delete element at required index
    void deleteEle(int index)
    {
        try
        {
            if (index < 0 || index > vecSize)
            {
                throw runtime_error("Error : Index out while inserting element");
            }

            for (int idx = index; idx < vecSize - 1; idx++)
            {
                vecArr[idx] = vecArr[idx + 1];
            }

            vecSize--;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    // OPerator overloading

    bool operator==(vector &vec)
    {
        if (vecSize != vec.vecSize)
        {
            return false;
        }

        for (int idx = 0; idx < vecSize; idx++)
        {
            if (vec.vecArr[idx] != vecArr[idx])
            {
                return false;
            }
        }

        return true;
    }

    void operator=(vector &vec)
    {
        vecSize = vec.size();
        vecCapacity = vec.capacity();

        vecArr = new vecType[vecSize];

        for (int idx = 0; idx < vecSize; idx++)
        {
            vecArr[idx] = (vec.vecArr[idx]);
        }
    }

    vecType &operator[](int index)
    {
        try
        {
            if (!(index >= 0 && index < vecSize))
            {
                throw runtime_error("Error : index out of bound");
            }

            return vecArr[index];
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';

            exit(1);
        }
    }
};

int main()
{
    vector<int> testvector1;

    int choice = 0;

    cout << "1.size of vector\n"
            "2.capacity of vector\n"
            "3.print vector\n"
            "4.push element\n"
            "5.pop element\n"
            "6.sum of all elements\n"
            "7.minimum element\n"
            "8.maximum element\n"
            "9.reverse vector\n"
            "10.insert element\n"
            "11.delete element\n"
            "12.EXIT\n"
         << endl;

    while (choice != 12)
    {
        cout << "Enter choice or 12 to exit : ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Size of array is : " << testvector1.size();

            break;

        case 2:
            cout << "Capacity of array is : " << testvector1.capacity();

            break;

        case 3:
            testvector1.print();

            break;

        case 4:
            int value;

            cout << "Enter value to push : ";

            cin >> value;

            testvector1.push_back(value);

            break;

        case 5:
            cout << "Element removed : " << testvector1.pop_back();

            break;

        case 6:
            cout << "Sum of all elements is : " << testvector1.accumulate();
            break;

        case 7:
            int idx1, idx2;

            cout << "Enter start index : ";

            cin >> idx1;

            cout << "Enter end index : ";

            cin >> idx2;

            cout << "Minimum element is : " << testvector1.minEle(idx1, idx2);

            break;

        case 8:

            cout << "Enter start index : ";

            cin >> idx1;

            cout << "Enter end index : ";

            cin >> idx2;

            cout << "Maximum element is : " << testvector1.maxEle(idx1, idx2);

            break;

        case 9:

            cout << "Enter start index : ";

            cin >> idx1;

            cout << "Enter end index : ";

            cin >> idx2;

            testvector1.reverse(idx1, idx2);

            break;

        case 10:
            int idx, value2;

            cout << "Enter index : ";

            cin >> idx;

            cout << "Enter value : ";

            cin >> value2;

            testvector1.insertEle(idx, value2);

            break;

        case 11:
            int idx3;

            cout << "Enter index : ";

            cin >> idx3;

            testvector1.deleteEle(idx3);

            break;

        default:

            break;
        }

        cout << endl;
    }

    return 0;
}