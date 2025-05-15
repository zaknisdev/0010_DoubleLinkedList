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

        //step 1 :allocate memory for new node
        node *newNode = new node();

        //step 2: assign value to the data fields
        newNode->noMhs = nim;

        //step 3: insert at beginning if list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        newNode->next = START;

        if (START != NULL)
        START->prev = newNode;

        newNode->prev = NULL;

        START = newNode;
        return;
    }

    node *current = START;

};