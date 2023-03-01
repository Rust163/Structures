#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <windows.h>
using namespace std;
struct Library {
    char title[60];
    char author[60];
    char publishing[60];
    char genre[20];
};

void inBooks(Library book, string bookPath) {
    fstream books;
    books.open(bookPath, fstream::in);
    if (!books.is_open()) {
        cout << "Ошибка открытия файла!!!";
    }
    else {
        for (int i = 0; i < 10; i++) {
            cout << "\n--------------------------------------------\n";
            books >> book.title >> book.author >> book.publishing >> book.genre;
            cout << "Название книги: " << book.title << "\n" <<
                "   Автор книги: " << book.author << "\n" <<
                "  Издательство: " << book.publishing << "\n" <<
                "    Жанр книги: " << book.genre << endl;
        }
    }
    books.close();
}

void outBooks(Library book, string bookPath) {
    fstream books;
    books.open(bookPath, fstream::in | fstream::out | fstream::app);
    if (!books.is_open()) {
        cout << "Ошибка открытия файла!!!";
    }
    else {
        for (int i = 0; i < 10; i++) {
            SetConsoleCP(1251);
            cout << "Введите название книги: ";
            cin >> book.title;
            books.getline(book.title, 60);
            gets_s(book.title);
            books << book.title;
            cout << "Введите имя автора: ";
            cin >> book.author;
            books.getline(book.author, 60);
            gets_s(book.author);
            books << book.author;
            cout << "Введите издательство: ";
            cin >> book.publishing;
            books.getline(book.publishing, 60);
            gets_s(book.publishing);
            books << book.publishing;
            cout << "Введите жанр книги: ";
            cin >> book.genre;
            books.getline(book.genre, 60);
            gets_s(book.genre);
            books << book.genre;
            cout << "\n***********************************************\n";
            SetConsoleCP(866);
        }
    }
    books.close();
}

int main() {
    setlocale(LC_ALL, "RUS");
    Library book{};
    string bookPath = "Books_library.txt";
    short value;
    cout << "\n=================Меню================\n";
    cout << "Выберите пункт меню для совершения действий со списком книг:" << endl;
    cout << "1. Вывести полный список книг." << endl;
    cout << "2. Заполнить каталог или дополнить(если файл уже создан и заполнялся ранее)." << endl;
    cin >> value;

    if (value == 1) {
        inBooks(book, bookPath);
    }
    if (value == 2) {
        outBooks(book, bookPath);
    }
        
    
    /*book[0]->title = "Оно";
    book[0]->author = "Кинг Стивен";
    book[0]->publishing = "Питер";
    book[0]->genre = "ужасы";

    book[1]->title = "Сияние";
    book[1]->author = "Кинг Стивен";
    book[1]->publishing = "Питер";
    book[1]->genre = "ужасы";

    book[2]->title = "Пролетая над гнездом кукушки";
    book[2]->author = "Кизи Кен";
    book[2]->publishing = "Питер";
    book[2]->genre = "трагедия";

    book[3]->title = "Война и мир";
    book[3]->author = "Толстой Лев Николаевич";
    book[3]->publishing = "АСТ";
    book[3]->genre = "эпопея";

    book[4]->title = "Анна Каренина";
    book[4]->author = "Толстой Лев Николаевич";
    book[4]->publishing = "АСТ";
    book[4]->genre = "трагедия";

    book[5]->title = "Хранители";
    book[5]->author = "Мур Алан";
    book[5]->publishing = "Азбука";
    book[5]->genre = "графический роман";

    book[6]->title = "Из ада";
    book[6]->author = "Мур Алан";
    book[6]->publishing = "Азбука";
    book[6]->genre = "графический роман";

    book[7]->title = "Бойцовский клуб";
    book[7]->author = "Паланик Чак";
    book[7]->publishing = "МИФ";
    book[7]->genre = "роман";

    book[8]->title = "Колыбельная";
    book[8]->author = "Паланик Чак";
    book[8]->publishing = "МИФ";
    book[8]->genre = "роман";

    book[9]->title = "Конан-варвар";
    book[9]->author = "Говард Роберт Ирвин";
    book[9]->publishing = "Слово";
    book[9]->genre = "фентези";*/



    
    
}


