#include <iostream>
#include "clsDynamicArray.h"
#include "clsMyQueArr.h"


void DynamicArray()
{
    clsDynamicArray<int> arr1(5);

    arr1.SetItem(0, 1);
    arr1.SetItem(1, 2);
    arr1.SetItem(2, 3);
    arr1.SetItem(3, 4);
    arr1.SetItem(4, 5);
    arr1.PrintList();

    std::cout << "\n==================================================\n";
    std::cout << "       Dynamic Array";
    std::cout << "\n==================================================\n";

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
void MyQueArr()
{
   clsMyQueArr <int> que1;

    que1.push(1);
    que1.push(2);
    que1.push(3);
    que1.push(4);
    que1.push(5);

    std::cout << "\n==================================================\n";
    std::cout << "       My Queue";
    std::cout << "\n==================================================\n";
    que1.Print();
    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << que1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << que1.IsEmpty() << "]";
    std::cout << "\n--------------------\n";

    std::cout << "\n--------------------\n";
    std::cout << "Front is " << que1.front();
    std::cout << "\nBack is " << que1.back();
    std::cout << "\n--------------------\n";

    std::cout << "The item in index 3 is [" << que1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";

    que1.push(6);
    std::cout << "The Queue after push         : "; que1.Print();
    que1.pop();
    std::cout << "The Queue after pop          : "; que1.Print();

    que1.push(7);
    std::cout << "The Queue after push         : "; que1.Print();

    que1.pop();
    std::cout << "The Queue after pop          : "; que1.Print();

    que1.InsertAfter(2, 8);
    std::cout << "The Queue after insert after index 2: "; que1.Print();

    que1.InsertAtFront(9);
    std::cout << "The Queue after insert at front: "; que1.Print();

    que1.InsertAtBack(10);
    std::cout << "\nThe Queue after insert at back: "; que1.Print();

    std::cout << "\n--------------------\n";
    que1.Reverse();
    std::cout << "The Queue after revese              : "; que1.Print();
    std::cout << "\n--------------------\n";

}

int main()
{
    //DynamicArray();
    MyQueArr();

}