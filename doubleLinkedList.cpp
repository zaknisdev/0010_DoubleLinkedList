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
    node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        string nim;
        cout << "\nEnter the roll number of the student";
        cin >> nim;

        node *newNode = new node();

        newNode->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        newNode->next = START;
        
    }
};