#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
    int noMhs;
    node *next;
    node *prev;
};

class DoubleLinkedList
{
    private:
    node *Start;

    public:
    DoubleLinkedList()
    {
        Start = NULL;
    }

    void addNode()
    {
        int nim;
        string nim;
        cout << "\nEnter the roll number of the student";
        cin >> nim;
    }
};