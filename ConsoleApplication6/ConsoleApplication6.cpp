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
    TodoItem* todoItems;

    TodoList(int todoItems_size)
    {
        todoItems = new TodoItem[todoItems_size];
    }
};


TodoList NewList()
{
    int todoItems_size;

    cout << "Enter TodoList size: ";
    cin >> todoItems_size;

    TodoList list(todoItems_size);
    
    cout << "Enter list id: ";
    cin >> list.id;

    cin.ignore();
    cout << "Enter list name: ";
    getline(cin, list.name);

    for (int i = 0; i < todoItems_size; i++)
    {
        cout << "Enter Item id: ";
        cin >> list.todoItems[i].id;

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

int main()
{
    NewList();
    return 0;
}

