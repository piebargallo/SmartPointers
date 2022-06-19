#include <iostream>
using namespace std;

// A generic smart pointer class
template <class T>

// Define to class
class SmartPtr {
	
	T* ptr; // Actual pointer

public:
	
	// Constructor
	explicit SmartPtr(T* p = NULL) { 
		
		ptr = p; 
		
	}

	// Destructor
	~SmartPtr() { 
	
		delete (ptr); 
		
	}

	// Overloading dereferencing operator
	T& operator*() {
	
		 return *ptr; 
		 
	}

	// Overloading arrow operator so that
	// members of T can be accessed
	// like a pointer (useful if T represents
	// a class or struct or union type)
	T* operator->() { 
	
		return ptr; 
		
	}

}; // End class

// Driver program
int main()
{
	
	SmartPtr<int> ptr(new int());
	*ptr = 20;
	cout << *ptr;
	
	return 0;

} // End driver program

// Output
// 20


