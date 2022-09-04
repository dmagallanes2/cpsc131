#include <iostream>
#include <fstream>

using namespace std;

int findTotalStud(int a[2][4][2])
{
    float total = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                total += a[i][j][k];
            }
        }
    }
    cout << "\nThe total amount of students is " << total << "\n";
    return total;
}

int findFemales(int a[2][4][2])
{
    float total = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int k = 0;
            total += a[i][j][k];
        }
    }
    cout << "The total females are " << total << "\n";
    return total;
}

int findGrads(int a[2][4][2])
{
    float total = 0;
    int i = 1;
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            total += a[i][j][k];
        }
    }
    cout << "The total Grad Students are " << total << "\n";
    return total;
}

int findUnderGradOrange(int a[2][4][2])
{
    float total;
    int i = 0;
    int j = 1;
    for (int k = 0; k < 2; k++)
    {
        total += a[i][j][k];
    }
    cout << "The total Under-Grad Students in the Orange Campus are " << total << "\n";
    return total;
}

int main()
{
    int stud[2][4][2] = {
        20, 25, 30, 15, 10, 30, 40, 20,
        10, 20, 60, 40, 40, 60, 40, 50,
    };

    findTotalStud(stud);
    findFemales(stud);
    findGrads(stud);
    findUnderGradOrange(stud);

    return 0;
}