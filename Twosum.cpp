#include <iostream>
using namespace std;

int main()
{
int size;
cout << "Enter the size of Array: ";
cin >> size;

int arr[size];
int Target;
bool found = false;
cout << "Enter the numbers in this Array:\n";
for (int i = 0;i < size; i++)
{
    cin >> arr[i];
}

cout << "Thanks!\n";
cout << "Now enter a Target Number: ";
cin >> Target;
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        if ((arr[i] + arr[j]) == Target)
        {
            cout << "Array[" << i << "," << j << "]\n";
            found = true;
        }
    }
}

if (!found)
{
    cout << "Not found!!!\n";
}
   return 0;
}
