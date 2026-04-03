

 #include <string>
#include <iostream>
using namespace std;

struct Person {
    int id;
    string name;
};

struct Node {
    Person data;
    Node* next;
};

struct LinkedList {
    Node* head;
    void Show() {
        Node* item = head;
        while (item != NULL) {
            cout << "Id: " << item->data.id << endl;
            cout << "Name: " << item->data.name << endl;
            item = item->next;
        }
    }
};

int main()
{
    LinkedList list = { NULL };
    do {
    system("cls");
    cout << "----- HUMAN RESOURCE --------" << endl;
    cout << "1. View person list" << endl;
    cout << "2. Add a person" << endl;
    cout << "3. Remove a person by id" << endl;
    cout << "4. Find a person by name" << endl;
    cout << "5. Export to file" << endl;
    cout << "6. Import from file" << endl;
    cout << "0. Exit" << endl;
    cout << "------------------------------" << endl;
    cout << "Your command: ";
    int cmd;
    cin >> cmd;
    switch (cmd)
    {
    case 1: {
        break;
    }
    case 2: {
        break;
    }
    case 3: {
        int id;
        cout << "Input ID to remove: ";
        cin >> id;
        break;
    }

    case 4: {
        string name;
        cout << "Input Name to find: ";
        cin.ignore();
        getline(cin, name);
        bool res = false;
        if (res) {
            cout << "Found person with name " << name << endl;
        }
        else
            cout << "Person isn't existed" << endl;
        break;
    }

    case 5: {
        cout << "Export successfully" << endl;
        break;
    }

    case 6: {
        cout << "Import successfully" << endl;
        break;
    }

    case 0: {
        return 0;
    }

    default:
        cout << "Your command isn't found. Try again..." << endl;
        break;
    }

    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();

  } while (true);
   return 0;
}