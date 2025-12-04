#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cerr << "ОШИБКА: Файл '" << filename << "' не найден!" << endl;
        return lines;
    }

    // Проверка на пустой файл
    inputFile.seekg(0, ios::end);
    if (inputFile.tellg() == 0) {
        cout << "Файл '" << filename << "' пуст." << endl;
        inputFile.close();
        return lines;
    }
    inputFile.seekg(0, ios::beg);

    string line;
    while (getline(inputFile, line)) {
        if (!line.empty()) { // Пропускаем пустые строки
            lines.push_back(line);
        }
    }

    inputFile.close();
    cout << "Успешно прочитано строк: " << lines.size() << endl;

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
    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cerr << "ОШИБКА: Не удалось открыть файл '" << filename
             << "' для записи!" << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "УСПЕХ: Данные записаны в файл '" << filename << "'" << endl;
}

// Изменения в main() для тестирования
int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> data = readFromFile("input.txt");
    printToScreen(data);
    writeToFile(data, "output.txt");

    return 0;
}
