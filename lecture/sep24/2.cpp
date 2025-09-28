#include <iostream>
using namespace std;

class my_array
{
private:
    int i = 0;       // number of elements
    int *arr = nullptr;

    void detail_of_array() const
    {
        cout << "Size of an array is " << i << endl;
    }

public:
    my_array() = default;

    // Destructor
    ~my_array()
    {
        delete[] arr;
    }

    // Copy constructor
    my_array(const my_array &other)
    {
        i = other.i;
        if (i > 0) {
            arr = new int[i];
            for (int j = 0; j < i; ++j) arr[j] = other.arr[j];
        } else {
            arr = nullptr;
        }
    }

    // Copy assignment
    my_array &operator=(const my_array &other)
    {
        if (this == &other) return *this;
        delete[] arr;
        i = other.i;
        if (i > 0) {
            arr = new int[i];
            for (int j = 0; j < i; ++j) arr[j] = other.arr[j];
        } else {
            arr = nullptr;
        }
        return *this;
    }

    void append(int value)
    {
        int new_size = i + 1;
        int *new_arr = new int[new_size];
        for (int j = 0; j < i; ++j) {
            new_arr[j] = arr[j];
        }
        new_arr[i] = value; // place new value at end
        delete[] arr;
        arr = new_arr;
        i = new_size;
    }

    void get_details() const
    {
        detail_of_array();
        for (int j = 0; j < i; ++j)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    void search(int s) const
    {
        bool found = false;
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] == s)
            {
                cout << s << " exists at index " << j << endl;
                found = true;
            }
        }
        if (!found) cout << s << " not found" << endl;
    }
};

int main()
{
    my_array m1;
    m1.append(1);
    m1.append(2);
    m1.get_details();
    m1.search(2);
    return 0;
}