/*Jack Utzerath
* CST-201
* SIngly Linked List
*/

#include "SinglyLinked.h"


int main() 
{
	//create object of class
	myList list;

	//initialize list
	list.insert(10);
	list.insert(20);
	list.insert(30);
	list.insert(40);
	list.insert(8908);

	cout << "This is the orginal list: ";
	list.display();

	cout << "List with insert value: ";
	list.insert(9);
	list.display();

	cout << "List with the front and back deleted: ";
	list.pop_front();
	list.pop_back();
	list.display();

	//cout << "Reversed list: ";
	//list.reverse();
	//list.display();

	cout << "Size of list: ";
	cout << list.size() << endl;

	cout << "Second list: ";
	myList list2;
	list2.insert(5);
	list2.insert(35);
	list2.insert(389158915);
	list2.insert(1);
	list2.insert(233 / 315);
	list2.insert(99);
	list2.insert(199);
	list2.insert(25);
	list2.display();

	cout << "These two lists merged together: ";
	list.merge(list2);
	list.display();

	cout << "Display the front and back of list: " << endl;
	list.front();
	list.back();
}
