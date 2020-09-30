﻿// lesson3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <atltime.h>

using namespace std;

int main()
{
    std::cout << "Hello User!\n";
    setlocale(LC_ALL, "Russian");

    int length;
    cout << "введите число строк\n";
    cin >> length;

    int** array = new int*[length];
    for (int k = 0; k < length; k++)
        array[k] = new int[length];

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            array[i][j] = i + j;
        }
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << array[i][j] <<" ";
        }
        cout << "\n";
    }

    ///// сумма чисел в строке с номером остатка от деления на дату
    SYSTEMTIME st;
    GetSystemTime(&st);
    int num = st.wDay % length;
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[num][i];
    }
    cout << "\n" << sum << "\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
