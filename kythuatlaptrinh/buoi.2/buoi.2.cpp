

#include <iostream>
#include <string>
using namespace std;
struct Person {
    int id;
    string name;

};
struct Node {
    Person data;
    Node* next;
};struct LinkedList {
    Node* head;
	void Show() {
		if (head == NULL) {
			cout << "Emty list" << endl;
			return;
		}
		Node* item = head;
		while (item != NULL) {
			cout << "Id:" << item->data.id << endl;
			cout << "Name:" << item->data.name << endl;
			item = item->next;
		}
	}
};
int main()
{
	LinkedList list =  {NULL};
	do {
		system("cls");
		cout << "------HUMAN RESOURCE------" << endl;
		cout << "1.View person list" << endl;
		cout << "2. Add a person" << endl;
		cout << "3. Remove a person" << endl;
		cout << "4. Find a person by name" << endl;
		cout << "5. Export to file" << endl;
		cout << "6. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "---------------------------" << endl;
		cout << " Your command:  ";
		int cdm;
		cin >> cdm;
		switch (cdm) {
		case 1: {
			list.Show();
			break;
		}
		case 2: {
			Person a;
			cin >> a;
			list Add(a);
			cout << ""
			
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
			cout << "Import Name to find:";
			cin.ignore();
			getline(cin, name);
			break;
		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		default:
			cout << " Khong co chuc nang nay!!" << endl;
		}
		}
		cout << "Go enter de tiep tuc...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}
