#include <iostream>

using namespace std;

#define SIZE 5

// Прототип функції сортування
void bsort(int iArray[], int n);

int main()
{
    char ch;
    int ii;
    int iArray[SIZE];

    // Введення масиву
    for (ii = 0; ii < SIZE; ii++)
    {
        cout << "Please enter an integer: ";
        cin >> iArray[ii];
    }

    // Запит на сортування
    cout << "\nWould you like to sort (Y/N) ";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        bsort(iArray, SIZE);
    }

    // Виведення результату
    cout << "\nArray content: ";
    for (ii = 0; ii < SIZE; ii++)
    {
        cout << iArray[ii] << " ";
    }
    cout << endl;

    return 0;
}

// Функція сортування
void bsort(int iArray[], int n)
{
    int i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {
        j = i;
        for (k = i + 1; k < n; k++)
        {
            if (iArray[k] < iArray[j])
            {
                j = k;
            }
        }
        if (i != j)
        {
            t = iArray[j];
            iArray[j] = iArray[i];
            iArray[i] = t;
        }
    }
}
