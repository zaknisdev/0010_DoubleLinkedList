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

    while (Current->next != NULL && current->next->noMhs < nim)
    {
        current = current->next;
    }

    if (current->next !=NULL && nim == current->next->noMhs)
    {
        cout << "\nDuplicate roll number not allowed" << endl;
        return;
    }

    newNode->nex = current->next;
    newNode->prev = current;

    if (current->next != NULL)
    current->next->prev = newNode;
    current->next = newNode;
    
    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;

            return;
        }

        cout << "\nEnter the roll number of the student whose record is to be deleted";
        int rollNo;
        cin >> rollNo;

        node *current = START;

        while (current !=NULL && current->noMhs != rollNo)
        current = current->next;

        if (current == NULL)
        {
            cout << "Record not found" << endl;
            return;
        }

        if (current == START)
        {
            START = current->next;
            if (START != NULL)
            START->prev = NULL;
        }
        else
        {
            current->prev->next = curret->next;

            if (current->next != NULL)
            current->next->prev = current->prev;
        }

        delete current;
        cout << "Record with roll number " << rollNo << " deleted " << endl;
    }

    void traverse()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        node *currentNode = START;

        cout << "\nReccord in ascending order of roll number are:\n";
        int i = 0
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << ". " << endl;

            currentNode = currentNode->next;
            i++;
        }
    }
    void revtraverse()
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }
            
            node *currentNode = START;
            int i = 0
            while (currentNode->next != NULL)
            {
                currentNode = currentNode->next;
                i++;
            }
            
            cout << "\nRecord in descending order of roll number are:\n";
            while(currentNode != NULL)
            {
                cout << i + 1 << ". " << currentNode->noMhs << ". " << endl;

                currentNode = currentNode->prev;
                i--;
            }
        }

        void searchData()
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }
            
            int rollNo;
            cout << "\nEnter the roll number to search: ";
            cin >> rollNo;
            
            node *current = START;

            while (current != NULL && current->noMhs != rollNo)
            current = current->next;

            if (current == NULL)
            {
                cout << "Record not found\n";
            }
            else
            {
                cout << "Record found\n";
                cout << "Roll number: " << current->noMhs << endl;
            }
        }
};

int main()
{
    DoubleLinkedList list;
    char choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Add Record\n";
        cout << "2. Delete redord\n";
        cout << "3. View ascending\n";
        cout << "4. View descending\n";
        cout << "5. Search record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case '1':
            list.addNode();
            break;

            case '2':
            list.hapus();
            break;

            case '3':
            list.traverse();
            break;

            case '4': 
            list.revtraverse();
            break;

            case '5':
            list.searchData
            break;

            case '6':
            return 0;

            default:
            cout << "Invalid option\n";
        }
        cout << " \nPress Enter to continue...";
        cin.ignore();
        cin.get();
        cout << endl;
        system("clear");

    }while (choice != '6');
}