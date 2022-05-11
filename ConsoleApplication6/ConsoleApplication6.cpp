#include <iostream>
#include <string>

using namespace std;

struct TodoItem
{
    int id;
    string name;
    string description;
    string due_date;
};

struct TodoList
{
    int id;
    string name;
    TodoItem todoItems[];
};

int main()
{
   
}

