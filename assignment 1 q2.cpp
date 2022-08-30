#include <iostream>
#include <algorithm>

using namespace std;

void displayArray(int x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

void displayArray(string x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

void displayArray(char x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

void sortArray(int x[], int n)
{
    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

void sortArray(string x[], int n)
{
    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

void sortArray(char x[], int n)
{
    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}

int main()
{
    int a[6] = {44, 55, 22, 88, 33, 11};
    string months[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "August", "September", "October", "Novemeber", "December"};
    char vowels[5] = {'E', 'U', 'A', 'I', 'O'};

    cout << "\nArrays Unsorted:\n\n";

    displayArray(a,6);

    displayArray(months,12);

    displayArray(vowels,5);

    cout << "\nArrays Sorted:\n\n";

    sortArray(a,6);

    sortArray(months,12);

    sortArray(vowels,5);

    return 0;
}