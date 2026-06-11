#include <iostream>
#include "clsDynamicArray.h"

int main()
{
    clsDynamicArray<int> arr1(5);

    arr1.SetItem(0,1);
    arr1.SetItem(1,2);
    arr1.SetItem(2,3);
    arr1.SetItem(3,4);
    arr1.SetItem(4,5);
    arr1.PrintList();
    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << arr1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << arr1.IsEmpty() << "]";
    std::cout << "\n--------------------\n";

    arr1.Resize(5);
    arr1.InsertAt(5, 6);
    arr1.InsertAt(6, 7);
    arr1.InsertAt(7, 8);
    arr1.InsertAt(8, 9);
    arr1.InsertAt(9, 10);

    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << arr1.Size() << "]";
    std::cout << "\n--------------------\n";
    
    std::cout << "The item in index 3 is [" << arr1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";
    
    arr1.InsertAtBigining(6);
    std::cout << "The list after insert at bigining  : "; arr1.PrintList();
    arr1.DeleteFirstItem(); 
    std::cout << "The list after delete first        : "; arr1.PrintList();
    
    arr1.InsertEnd(7);
    std::cout << "The list after insert end          : "; arr1.PrintList();
   
    arr1.DeleteLastItem();
    std::cout << "The list after delete last         : "; arr1.PrintList();
    
    arr1.InsertAfter(8, 8);
    std::cout << "The list after insert after index 8: "; arr1.PrintList();
    
    arr1.InsertBefor(10, 9);
    std::cout << "The list after insert befor index 9: "; arr1.PrintList();

    arr1.DeleteByValue(3);
    std::cout << "The list after delete by value 3   : "; arr1.PrintList();
    
    arr1.DelelteItemAt(3);
    std::cout << "The list after delete by index 3   : "; arr1.PrintList();



    std::cout << "\n--------------------\n";
    arr1.Reverse();
    std::cout << "The list after revese              : "; arr1.PrintList();
    std::cout << "\n--------------------\n";


}