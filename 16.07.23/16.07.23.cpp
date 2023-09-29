#include<iostream>
using namespace std;

// Task 1 func
void degree(int x, int y) 
{
    int sum = x;
    for (int i = 1; i < y; i++)
    {
        sum *= x;
    }
    cout << sum << "\n";
}


//Task 2 func
void sum(int a, int b)
{
    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        sum += i;
    }
    cout << sum << "\n";
}


//Task 3 func
int third_task(int n1, int n2)
{
    for (int i = n1; i < n2; i++)
    {
        int count = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                count += j;
            }
        }
        if (count == i && count)
        {
            cout << count << "\n";
        }
    }
    return 0;
}


int fifth_task(string lucky)
{
    lucky[0] + lucky[1] + lucky[2] == lucky[3] + lucky[4] + lucky[5] ? cout << "yes" : cout << "no";
    return 0;
}


int sixth_task(int array[], int searchKey, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == array[searchKey])
        {
            cout << "Element of this key was found" << "\n";
        }
    }
    return 0;
}


int main()
{
    //Task 1
    int x, y;
    cin >> x;
    cin >> y;
    degree(x, y);


    // Task 2
    int a, b;
    cin >> a;
    cin >> b;
    sum(a, b);

    //Task 3
    third_task(0, 9000);


    //Task 5
    string digit;
    cin >> digit;
    if (digit.length() == 6)
    {
        fifth_task(digit);
    }
    else
        cout << "Unknown digit." << "\n";


    //Task6
    int searchKey;
    cout << "Please, enter the key:  ";
    cin >> searchKey;
    const int size = 10;
    int array[size] = { 1,2,3,4,5,6,7,8,9,10 };
    sixth_task(array, searchKey, size);

}
