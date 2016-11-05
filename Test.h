/**
*	@author Stephen Fulton
*	@date 10/31/2016
*	@brief A header file for test class
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedListOfInts.h"

class Test
{
	public:
		/** @pre None.
		*   @post Tests are ran.
		*   @return None.
		*/	
		void runTests();

	private:
		/** @pre None.
		*   @post Tests isEmpty function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/	
		void testIsEmpty();
		/** @pre None.
		*   @post Tests Size function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testSize();
		/** @pre None.
		*   @post Tests Search function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testSearch();
		/** @pre None.
		*   @post Tests addBack function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testAddBack();
		/** @pre None.
		*   @post Tests addFront function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testAddFront();
		/** @pre None.
		*   @post Tests removeBack function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testRemoveBack();
		/** @pre None.
		*   @post Tests removeFront function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testRemoveFront();
		/** @pre Pointer is looking at a list.
		*   @post Prints out list of ints in list looked at by given pointer.
		*   @return None.
		*/
		void printList(LinkedListOfInts*);
		/** @pre None.
		*   @post Tests Destructor function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testDestructor();
		/** @pre None.
		*   @post Tests Constructor function of LinkedListOfInts, displays results in terminal.
		*   @return None.
		*/
		void testConstructor();
};

#endif
