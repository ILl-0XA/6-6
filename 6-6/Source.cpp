#include<iostream>
#include<cmath>
#include <stdlib.h>
#include<iomanip>
using namespace std;
    void rows_by_snake(int n, int m, int** a)
    {
        int i, j, k = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++) {
                a[i][j] = (i % 2 ? (i + 1) * m - j - 1 : k);
                k++;
            }
    }

    void snake1(int n, int m, int** a) 
    {
        int i, j, k = 0;
        for (j = 0; j < m; j++)
            for (i = 0; i < n; i++) {
                a[i][j] = (j % 2 ? (j + 1) * n - i - 1 : k);
                k++;
            }
    }

    void snake2(int n, int m, int** a)
    {
        int i, j;
        for (i = 0; i < n; i++) {
            cout << endl;
            for (j = 0; j < m; j++) cout << a[i][j] << " ";
        }
    }

    int result()
    {
        const int n = 4, m = 6;
        int** a, i;
        a = new int* [n];
        for (i = 0; i < n; i++) a[i] = new int[m];
        snake1(n, m, a);
        snake2(n, m, a);
        cout << "\n\n��������" << endl;
        return 0;
    }
int secondtask()
{
   
    
        int const n = 5;
        int const m = 4;

        int Arr[n][m];
        int i = 0, j, k = 0, p = 1;

        while (i < n * m) /*���� �� ������ �����*/
        {
            k++;
            for (j = k - 1; j < m - k + 1; j++)
            {
                Arr[k - 1][j] = p++;
                i++;
            }   /*����������� �������� �������� ��� �������*/

            for (j = k; j < n - k + 1; j++)
            {
                Arr[j][m - k] = p++;
                i++;
            }   /* --//-- �� ������� ������������� �������*/

            for (j = m - k - 1; j >= k - 1; j--)
            {
                Arr[n - k][j] = p++;
                i++;
            }   /* --//-- �� ������� ��������������� �������*/

            for (j = n - k - 1; j >= k; j--)
            {
                Arr[j][k - 1] = p++;
                i++;
            }   /* --//-- �� ������ ������������� �������*/

        }

        for (int q = 0; q < n; q++)
        {
            for (int w = 0; w < m; w++)
            {
                cout << setw(4) << Arr[q][w];
            };
            cout << endl;
           
        }
        cout << "\n��������" << endl;

        return(0);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        float check;
        cout << "\n������ ���������� ������? (���������� ������ ��� ������� �������: 1, ���������� ������ ��� ������� �������: 2, ������������� ������: 0) ";
        cin >> check;

        if (check == 0) break;
        else if (check == 1) result();
        else if (check == 2) secondtask();
        else
        {
            cout << "������� �� ���������� ��������, ���������� �����" << endl;
        }
    }
}
