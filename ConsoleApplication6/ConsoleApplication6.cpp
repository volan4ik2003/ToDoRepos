#include <iostream>
#include <string>

using namespace std;

struct TodoItem
{
    int id = 0;
    string name = " ";
    string description = " ";
    string due_date = " ";
};

struct TodoList
{
    int id = 0;
    string name = " ";
    TodoItem* todoItems = new TodoItem[5];
};


TodoList NewList()
{
    int todoItems_size;

    cout << "Enter TodoList size: ";
    cin >> todoItems_size;

    TodoList list;
    
    cout << "Enter list id: ";
    cin >> list.id;

    cin.ignore();
    cout << "Enter list name: ";
    getline(cin, list.name);

    for (int i = 0; i < todoItems_size; i++)
    {
        list.todoItems[i].id = i+1;

        cin.ignore();
        cout << "Enter Item name: ";
        getline(cin, list.todoItems[i].name);

        cout << "Enter Item description: ";
        getline(cin, list.todoItems[i].description);
    
        cout << "Enter Item due_date: ";
        getline(cin, list.todoItems[i].due_date);
    }
    return list;
}

TodoList AddItem(TodoList list)
{
    int i = sizeof(list.todoItems) / sizeof(TodoList);

        list.todoItems[i].id = i + 1;
        cin.ignore();
        cout << "Enter Item name: ";
        getline(cin, list.todoItems[i].name);

        cout << "Enter Item description: ";
        getline(cin, list.todoItems[i].description);

        cout << "Enter Item due_date: ";
        getline(cin, list.todoItems[i].due_date);

    return list;
}

int main()
{
    TodoList list = NewList();

    int ch;

    do
    {
        cout << "Enter tour choise" << endl;
        cout << "1. AddItem" << endl;
        cout << "0.Exit" << endl;

        cin >> ch;

        switch (ch)
        {
        case 0:
            break;
        case 1:
            AddItem(list);
            break;
        }
    } while (ch != 0);

    return 0;
}

