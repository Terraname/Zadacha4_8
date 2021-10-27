// Zadacha8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "This program replaces all elements of array between max element and min element or deletes them\n";
    int n, x, max1, n1, min2, n2;
    double* a;
    std::cout << "Enter N\n";
    std::cin >> n;
    while (std::cin.fail() || n <= 0)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Wrong N!\n";
        std::cout << "Enter N another time\n";
        std::cin >> n;
    }
    a = new double[n];
    std::cout << "Enter elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong element's value!\n";
            std::cout << "Enter element № " << (i + 1) << "  of the array another time\n";
            std::cin >> a[i];
        }
    }
    max1 = a[0];
    n1 = 0;
    min2 = a[0];
    n2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
            n1 = i;
        }
        else if (a[i] < min2)
        {
            min2 = a[i];
            n2 = i;
        }
    }
    /*std::cout << "max" << max1;
    std::cout << "n max" << n1;
    std::cout << "min" << min2;
    std::cout << "n min" << n2;*/
    for (int i = 1; i < n; i++)
    {
            if (n1 > i && i > n2)
            {
                a[i] = 0;
            }
            else if (n1 < i && i < n2)
            {
                a[i] = 0;
            }
    }

    /*std::cout << "New array is: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\n";
    }*/

    if (n1 - n2 > n / 3)
    {
        for (int x = 1; x < n1 - n2; x++)
        {
                for (int j = n2 + 1 ; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n--;
        }
    }
    else if (n2 - n1 > n / 3)
    {
        for (int x = 1; x < n2 - n1; x++)
        {
            for (int j = n1 + 1; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }

    std::cout << "New array is: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\n";
    }
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
