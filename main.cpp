#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    // TODO: Реализация чтения
    return lines;
}

// Функция 2: Вывод вектора строк на экран
void printToScreen(const vector<string>& lines) {
    // TODO: Реализация вывода на экран
}

// Функция 3: Запись вектора строк в файл
void writeToFile(const vector<string>& lines, const string& filename) {
    // TODO: Реализация записи в файл
}

// Изменения в main() для тестирования
int main() {
    setlocale(LC_ALL, "RU");
    vector<string> data = readFromFile("input.txt");

    // Временный вывод для проверки
    cout << "Прочитано строк: " << data.size() << endl;
    for (const auto& line : data) {
        cout << "> " << line << endl;
    }

    // printToScreen(data);
    // writeToFile(data, "output.txt");

    return 0;
}
