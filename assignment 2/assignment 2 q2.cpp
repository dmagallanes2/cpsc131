#include <iostream>
#include <vector>

using namespace std;

//template function to display arrays

template <class T1>

void displayAll(T1 x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}

//template function to display vectors

template <class T2>

void displayVect(vector<T2> x)
{
    for (unsigned int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

//function to compute average age

int computeAgeAve(int x[], int n)
{
    float total;
    
    for (int i = 0; i < n; i++)
    {
        total += x[i];
    }

    float avg = total / n;

    cout << "The average age is " << avg << endl;

    return avg;
}

int main()
{
    vector<int> vage;
    vector<string> vnames;

    int age[5] = {33, 67, 55, 72, 44};
    string names[3] = {"Trump", "Clinton", "Obama"};

    //copies arrays into vectors

    for (int i = 0; i < 5; i++)
    {
        vage.push_back(age[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        vnames.push_back(names[i]);
    }

    displayVect(vage);
    displayVect(vnames);

    computeAgeAve(age, 5);

    return 0;

}