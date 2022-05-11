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
    TodoItem* todoItems = new TodoItem[];
};

int main()
{
    TodoList list;
}

