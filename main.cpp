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
     if (lines.empty()) {
        cout << "Вектор строк пуст!" << endl;
        return;
    }

    cout << "\nСОДЕРЖИМОЕ ВЕКТОРА" << endl;
    cout << "Всего строк: " << lines.size() << endl;
    cout << "----------------------------" << endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "/" << lines.size() << "] " << lines[i] << endl;
    }

    cout << "КОНЕЦ ВЫВОДА\n" << endl;
}

// Функция 3: Запись вектора строк в файл
void writeToFile(const vector<string>& lines, const string& filename) {
    // TODO: Реализация записи в файл
}

int main() {
    setlocale(LC_ALL, "Russian");
    //vector<string> data = readFromFile("input.txt");
    //тестовый вектор
    vector<string> data = {
        "Первая строка из тестовых данных",
        "Вторая строка для проверки вывода",
        "Третья строка программы",
        "Четвертая и последняя строка"
    };
    printToScreen(data);
    writeToFile(data, "output.txt");
    return 0;
}
