#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, count;
    string str[100];
    cout << "Enter a Sentence and I'll Tell the number of Alphabets in Each Word.\n";
    for (i = 0;; i++)
    {
        cin >> str[i];

        if (cin.get() == '\n')
        {
            count = i + 1;
            break;
        }
    }
    
    for (i = 0; i < count; i++)
    {
        int len = str[i].length();
        cout << len << " ";
    }
    cout << endl;
}
