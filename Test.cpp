/**
*	@author Stephen Fulton
*	@date  November 5
*	@file Test.cpp
*/

#include "Test.h"

void Test::runTests()
{
	std::cout <<"Running tests" << std::endl;
	testConstructor();
	testDestructor();
	testIsEmpty();
	testSize();
	testSearch();
	testAddBack();
	testAddFront();
	testRemoveBack();
	testRemoveFront();
}
void Test::testIsEmpty()
{
	std::cout << "\n\n---------------------------------------EMPTY TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Creating empty list: ";
	if (li->isEmpty())
	{
		std::cout<<"Successful"<<std::endl;
	}
	else{std::cout << "Failure" << std::endl;}
	std::cout << "Is empty after adding 10 nodes: ";
	for (int i = 0; i < 10; i++)
	{
		li->addFront(i);
	}
	if(!li->isEmpty())
	{
		std::cout << "No" << std::endl;
	}
	else{std::cout << "Yes (Should be No)" << std::endl;}
	std::cout << "Is empty after removing 5 nodes: ";
	for (int i = 0; i < 5; i++)
	{
		li->removeFront();
	}
	if(!li->isEmpty())
	{
		std::cout << "No" << std::endl;
	}
	else{std::cout << "Yes (Should be No)" << std::endl;}
	std::cout << "Is empty after removing remaining nodes: ";
	for (int i = 0; i < 5; i++)
	{
		li->removeFront();
	}
	if(li->isEmpty())
	{
		std::cout << "Yes" << std::endl;
	}
	else{std::cout << "No (Should be Yes)" << std::endl;}
	delete li;
}
void Test::testSize()
{
	std::cout << "\n\n---------------------------------------SIZE TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Size after list creation: ";
	if (li->size() == 0)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure" << std::endl;}
	std::cout << "Size 1 after placing node: ";
	li->addFront(0);
	if(li->size() == 1)
	{
		std::cout << "Successful"<<std::endl;
	}
	else{std::cout << "Failure (Should be 1)" << std::endl;}
	std::cout << "Size accurate after placing 10000 nodes: ";
	for (int i = 0; i < 9999; i++)
	{
		li->addFront(i);
	}
	if(li->size() == 10000)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be 10000)" << std::endl;}
	std::cout << "Size after removing one node: ";
	li->removeFront();
	if(li->size() == 9999)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure" << std::endl;}
	std::cout << "Size after removing 5000 nodes: ";
	for (int i = 0; i < 5000; i++)
	{
		li->removeBack();
	}
	if(li->size() == 5000)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be 5000)" << std::endl;}
	std::cout << "Size after removing remaining nodes: ";
	for (int i = 0; i < 5000; i++)
	{
		li->removeBack();
	}
	if(li->size() == 0)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be 0)" << std::endl;}
	delete li;
}
void Test::testSearch()
{
	std::cout << "\n\n---------------------------------------SEARCH TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Search returns false on empty list: ";
	if(li->search(0) == false)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be false)" << std::endl;}
	std::cout << "Search 1 returns false on list containing 2-11: ";
	for(int i = 0; i < 10; i++)
	{
		li->addFront(i+2);
	}
	if(li->search(1) == false)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (should be false)" << std::endl;}
	std::cout << "Search 5 in list containing 5 returns true: ";
	if(li->search(5) == true)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be true)" << std::endl;}
	std::cout << "Search 5 on list containing multiple 5s returns true: ";
	for(int i = 0; i < 100; i++)
	{
		li->addFront(5);
	}
	if(li->search(5) == true)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should be true)" << std::endl;}
	delete li;
	li = nullptr;
}
void Test::testAddBack()
{
	std::cout << "\n\n---------------------------------------ADD BACK TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Add Back (0) on Empty List adds node with value 0: ";
	li->addBack(0);
	if(li->toVector()[0] == 0)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should add value 0)" << std::endl;}
	std::cout << "Add back (1) on list of node adds node to back of list: " << std::endl;
	std::cout << "Expected 0, 1: ";
	li->addBack(1);
	if(li->toVector()[1] == 1)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Got ";
	     printList(li);
	     std::cout << ")" << std::endl;}
	std::cout << "Add back 10 (0-10) to empty list: " << std::endl;
	delete li;
	li = nullptr;
	LinkedListOfInts* newList = new LinkedListOfInts();
	std::cout << "Expected 1, 2, 3, 4, 5, 6, 7, 8, 9, 10: ";
	for (int i = 0; i < 11; i++)
	{
		newList->addBack(i);
	}
	if(newList->toVector()[9] == 10)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Got ";
	     printList(newList);
	     std::cout << ")" << std::endl;}
	delete newList;
}
void Test::testAddFront()
{
	std::cout << "\n\n---------------------------------------ADD FRONT TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Add Front (0) on Empty List adds node with value 0: ";
	li->addFront(0);
	if(li->toVector()[0] == 0)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Should add value 0)" << std::endl;}
	std::cout << "Add front (1) on list of node adds node to front of list: " << std::endl;
	std::cout << "Expected 1, 0: ";
	li->addFront(1);
	if(li->toVector()[1] == 0)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Got ";
	     printList(li);
	     std::cout << ")" << std::endl;}
	std::cout << "Add front 10 (0-10) to empty list: " << std::endl;
	delete li;
	li = nullptr;
	LinkedListOfInts* newList = new LinkedListOfInts();
	std::cout << "Expected 10, 9, 8, 7, 6, 5, 4, 3, 2, 1: ";
	for (int i = 0; i < 11; i++)
	{
		newList->addFront(i);
	}
	if(newList->toVector()[9] == 1)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (Got ";
	     printList(newList);
	     std::cout << ")" << std::endl;}
	delete newList;
}
void Test::testRemoveBack()
{
	std::cout << "\n\n---------------------------------------REMOVE BACK TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Returned false when removeBack on empty list: ";
	if(li->removeBack() == false)
	{
		std::cout << "Successful"<<std::endl;
	}
	else{std::cout << "Failure (expected true)" << std::endl;}
	std::cout << "Removed back node when removeBack on list containing nodes (1, 0): ";
	li->addFront(0);
	li->addFront(1);
	li->removeBack();
	if(li->toVector()[li->size()-1] == 1)
	{
		std::cout << "Successful"<<std::endl;
	}
	else{std::cout << "Failure (expected 1, got 0)" << std::endl;}
	delete li;
}
void Test::testRemoveFront()
{
	std::cout << "\n\n---------------------------------------REMOVE FRONT TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Returned false when removeFront on empty list: ";
	if(li->removeFront() == false)
	{
		std::cout << "Successful"<<std::endl;
	}
	else{std::cout << "Failure (expected true)" << std::endl;}
	std::cout << "Removed front node when removeFront on list containing nodes (1, 0): ";
	li->addFront(0);
	li->addFront(1);
	li->removeFront();
	if(li->toVector()[0] == 0)
	{
		std::cout << "Successful"<<std::endl;
	}
	else{std::cout << "Failure (expected 1, got 0)" << std::endl;}
	delete li;
}

void Test::testDestructor()
{
	std::cout << "\n\n---------------------------------------DESTRUCTOR TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	li->addFront(0);
	li->addFront(1);
	std::cout << "Calling toVector on deleted list shouldn't work: ";
	delete li;
	if(li->toVector()[0] == 1)
	{
		std::cout << "This didn't segfault hahahahaha what is wrong with this" << std::endl;
	}
	else{std::cout << "This'll never happen" << std::endl;}
}

void Test::testConstructor()
{
	std::cout << "\n\n---------------------------------------CONSTRUCTOR TESTS------------------------------------------------\n\n";
	LinkedListOfInts* li = new LinkedListOfInts();
	std::cout << "Create new stack-allocated LinkedListOfInts: ";
	if(li != nullptr)
	{
		std::cout << "Successful" << std::endl;
	}
	else{std::cout << "Failure (expected non-nullptr)" << std::endl;}
	delete li;
	
}
void Test::printList(LinkedListOfInts* li)
{
	std::vector<int> temp = li->toVector();
	for(int i = 0; i < temp.size(); i++)
	{
		if(i != 0)
		{
			std::cout << ", ";
		}
		std::cout << temp[i];
	}
}
