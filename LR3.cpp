#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(nullptr));
    int arr[10];
    cout << "Массив выглядит:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << " ";
    }
    cout << endl << "Сумма квадратов 2го 3го и 6го элемента данного массива = "
         <<  pow(arr[1], 2) + pow(arr[2], 2) + pow(arr[5], 2) << endl;
    ///
    int n = 0;
    cout << endl << "Введите размер массива желательно больше 10 = ";
    cin >> n;

    int* arr_2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i << " элемент: ";
        cin >> arr_2[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << i << " Элемент " << arr_2[i] << std::endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr_2[i] % 2 == 0)
        {
            arr_2[i] *= 10;
        }
        cout << i << " Элементы " << arr_2[i] << std::endl;
    }

    int k1 = 0,
        k2 = 0;
    double sum = 0;
    cout << "Поиск среднее арифметическое элементов массива с k1-ого по k2-ой" << endl;
    cin >> k1 >> k2;
        for (int i = k1;i <= k2;i++)
        {
            sum = sum + arr_2[i];
        }
    cout << sum / (k2 - k1);
    delete[] arr_2;
    
    int m = 0;
    cout << "Введите длину массива строго меньше 5ти " << std::endl;
    cin >> m;

    vector<int> vec;
    int element;
    for (int i = 0; i < m; ++i)
    {
        cout << "Введите " << i << " элемент ";
        cin >> element;
        vec.push_back(element);
    }
    for (auto it : vec)
    {
        cout << it;
    }
    cout << std::endl;

    vec.push_back(25);
    for (auto it : vec)
    {
        cout << it;
    }
    cout << std::endl;

    int sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum = sum + pow(vec[i], 2);
    }
    cout << "Cумма квадратов массива равна " << sum << std::endl;

    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] >= 5)
        {
            vec.erase(vec.begin() + i);
            break;
        }
    }
    for (auto it : vec)
    {
        cout << it;
    }
    cout << std::endl;
    //// 
    string a;
    cout << "Введите строку" << endl;
    getline(cin, a);
    cout << a.length() << endl;
    char ABC[42] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x' };
    int sum = 0;
    for (int i = 0; i < 42; i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if (tolower(a[j]) == ABC[i])
            {
                sum++;
            }
        }
    }
    cout << "Numbers in frase = " << sum << endl
         << "Выберите с какого по какой элемент вы бы хотели использовать " << endl;

    int i1, i2;
    cin >> i1 >> i2;
    cout << a.substr(i1, i2 - i1 + 1) << endl;

    string z1 = "can you can a can as a canner can can a can ?",
           z2;
    cout << z1 << endl 
         << "Введите то на что вы хотите заменить can ";
    cin >> z2;
    string can = "can ";
    while (z1.find(can) != -1)
    {
        int p = z1.find(can);
        z1.erase(p, can.size());
        z1.insert(p, z2 + " ");
    }
    cout << z1 << endl;
    
    return 0;
}
