#include <iostream>
#include <cmath>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int choice;
    double num1, num2;

    do {
      
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Квадратный корень\n";
        cout << "7. 1 процент от числа\n";
        cout << "8. Факториал числа\n";
        cout << "9. Выйти из программы\n";

       
        cout << "Введите номер операции (1-9): ";
        cin >> choice;

        switch (choice) {
            case 1:

                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                cout << "Результат: " << num1 + num2 << endl;
                break;

            case 2:
             
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                cout << "Результат: " << num1 - num2 << endl;
                break;

            case 3:
              
                cout << "Введите делимое: ";
                cin >> num1;
                cout << "Введите делитель: ";
                cin >> num2;
                if (num2 != 0) {
                    cout << "Результат: " << num1 / num2 << endl;
                } else {
                    cout << "Ошибка: деление на ноль!\n";
                }
                break;

            case 4:
                
                cout << "Введите первый множитель: ";
                cin >> num1;
                cout << "Введите второй множитель: ";
                cin >> num2;
                cout << "Результат: " << num1 * num2 << endl;
                break;

            case 5:
                
                cout << "Введите основание: ";
                cin >> num1;
                cout << "Введите показатель степени: ";
                cin >> num2;
                cout << "Результат: " << pow(num1, num2) << endl;
                break;

            case 6:
                
                cout << "Введите число: ";
                cin >> num1;
                if (num1 >= 0) {
                    cout << "Результат: " << sqrt(num1) << endl;
                } else {
                    cout << "Ошибка: нельзя извлечь корень из отрицательного числа!\n";
                }
                break;

            case 7:
               
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << 0.01 * num1 << endl;
                break;

            case 8:
                
                cout << "Введите число: ";
                cin >> num1;
                if (num1 >= 0) {
                    cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
                } else {
                    cout << "Ошибка: нельзя вычислить факториал отрицательного числа!\n";
                }
                break;

            case 9:
               
                cout << "Выход из программы.\n";
                break;

            default:
               
                cout << "Ошибка: некорректная операция. Пожалуйста, выберите от 1 до 9.\n";
        }

    } while (choice != 9);

    return 0;
}
