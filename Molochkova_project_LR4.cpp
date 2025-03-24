#include <iostream>
#include <string>
using namespace std;

//Функция для ввода вещественного числа X
double inputDouble() 
{
   
}

//Функция для ввода вещественного числа Y
double inputDouble2()
{
    
}

//Функция для ввода вещественного числа X
double inputDouble3()
{
    
}

//Функция для нахождения целой части суммы этих 3х чисел
double integerPartOfSum(double x, double y, double z)
{
    double sum = x + y + z;
    int integerPart = static_cast<int>(sum);
    cout << "Целая часть суммы чисел: " << integerPart << endl;
}

//Функция для нахождения дробной части среднего геометрического модулей этих 3х чисел
double fractionalPartOfGeometricMean(double x, double y, double z)
{
    
}

int main()
{
    int choice;
    double x = 0, y = 0, z = 0;

    do {
        cout << "Меню:" << endl;
        cout << "1. Ввести вещественное число x" << endl;
        cout << "2. Ввести вещественное число y" << endl;
        cout << "3. Ввести вещественное число z" << endl;
        cout << "4. Найти целую часть суммы этих 3 чисел" << endl;
        cout << "5. Найти дробную часть среднего геометрического модулей этих 3 чисел" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                x = inputDouble();
                break;
            case 2:
                y = inputDouble2();
                break;
            case 3:
                z = inputDouble3();
                break;
            case 4:
                integerPartOfSum(x, y, z);
                break;
            case 5:
            fractionalPartOfGeometricMean(x, y, z);
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}