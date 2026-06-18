#include <iostream>
#include "clsDynamicArray.h"
#include "clsMyQueArr.h"
#include "clsMystackArr.h"
#include "clsDblLinkedList.h"
#include "clsMyQue.h"
#include "clsMystack.h"

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
    std::cout << "       My Queue Arr";
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
void MyStackArr()
{
    clsMyStackArr <int> stk1;

    stk1.push(1);
    stk1.push(2);
    stk1.push(3);
    stk1.push(4);
    stk1.push(5);

    std::cout << "\n==================================================\n";
    std::cout << "       My Stack Arr";
    std::cout << "\n==================================================\n";
    stk1.Print();
    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << stk1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << stk1.IsEmpty() << "]";
    std::cout << "\n--------------------\n";

    std::cout << "\n--------------------\n";
    std::cout << "Top is " << stk1.Top();
    std::cout << "\nBottom is " << stk1.Bottom();
    std::cout << "\n--------------------\n";

    std::cout << "The item in index 3 is [" << stk1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";

    stk1.push(6);
    std::cout << "The Stack after push         : "; stk1.Print();
    stk1.pop();
    std::cout << "The Stack after pop          : "; stk1.Print();

    stk1.push(7);
    std::cout << "The Stack after push         : "; stk1.Print();

    stk1.pop();
    std::cout << "The Stack after pop          : "; stk1.Print();

    stk1.InsertAfter(2, 8);
    std::cout << "The Stack after insert after index 2: "; stk1.Print();

    stk1.InsertAtFront(9);
    std::cout << "The Stack after insert at front: "; stk1.Print();

    stk1.InsertAtBack(10);
    std::cout << "\nThe Stack after insert at back: "; stk1.Print();

    std::cout << "\n--------------------\n";
    stk1.Reverse();
    std::cout << "The Stack after revese              : "; stk1.Print();
    std::cout << "\n--------------------\n";
}
void TestDblLinkedList()
{
    clsDblLinkedList<int> list1;

    list1.InsertAtBiginig(3);
    list1.InsertAtBiginig(2);
    list1.InsertAtBiginig(1);
    list1.InsertAtEnd(4);
    list1.InsertAtEnd(5);

    std::cout << "\n==================================================\n";
    std::cout << "        My Doubly Linked List Test";
    std::cout << "\n==================================================\n";
    std::cout << "Initial List Contents:\n";
    list1.Print();

    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << list1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << (list1.IsEmpty() ? "True" : "False") << "]";
    std::cout << "\n--------------------\n";

    std::cout << "The item at index 3 is [" << list1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";

    list1.UpdateItem(3, 40);
    std::cout << "After updating index 3 to 40:\n";
    list1.Print();
    std::cout << "\n--------------------\n";

    list1.InsertAfter(2, 8);
    std::cout << "After inserting 8 after index 2:\n";
    list1.Print();
    std::cout << "\n--------------------\n";

    std::cout << "Searching for value 40... ";
    if (list1.Find(40) != NULL)
        std::cout << "Found!\n";
    else
        std::cout << "Not Found!\n";
    std::cout << "--------------------\n";

    list1.DeleteFirstNode();
    std::cout << "After deleting first node:\n";
    list1.Print();
    std::cout << "\n--------------------\n";

    list1.DeleteLastNode();
    std::cout << "After deleting last node:\n";
    list1.Print();
    std::cout << "\n--------------------\n";

    list1.DeleteNode(8);
    std::cout << "After deleting node with value 8:\n";
    list1.Print();
    std::cout << "\n--------------------\n";

    std::cout << "After reversing the list:\n";
    list1.Reverse();
    list1.Print();
    std::cout << "\n--------------------\n";

    list1.Clear();
    std::cout << "After clearing the list:\n";
    std::cout << "Size is [" << list1.Size() << "]\n";
    std::cout << "Is empty [" << (list1.IsEmpty() ? "True" : "False") << "]\n";
    std::cout << "==================================================\n";
}
void TestMyQueue()
{
    clsMyQue<int> que1;

    que1.push(1);
    que1.push(2);
    que1.push(3);
    que1.push(4);
    que1.push(5);

    std::cout << "\n==================================================\n";
    std::cout << "              My Queue Test";
    std::cout << "\n==================================================\n";
    std::cout << "Initial List Contents:\n";
    que1.Print();

    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << que1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << (que1.IsEmpty() ? "True" : "False") << "]";
    std::cout << "\n--------------------\n";

    std::cout << "The item at index 3 is [" << que1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";

    que1.UpdateItem(3, 40);
    std::cout << "After updating index 3 to 40:\n";
    que1.Print();
    std::cout << "\n--------------------\n";

    que1.InsertAfter(2, 8);
    std::cout << "After inserting 8 after index 2:\n";
    que1.Print();
    std::cout << "\n--------------------\n";

    std::cout << "After reversing the list:\n";
    que1.Reverse();
    que1.Print();
    std::cout << "\n--------------------\n";

    que1.Clear();
    std::cout << "After clearing the list:\n";
    std::cout << "Size is [" << que1.Size() << "]\n";
    std::cout << "Is empty [" << (que1.IsEmpty() ? "True" : "False") << "]\n";
    std::cout << "==================================================\n";
}
void TestMyStack()
{
    clsMyStack<int> stk1;

    stk1.push(1);
    stk1.push(2);
    stk1.push(3);
    stk1.push(4);
    stk1.push(5);

    std::cout << "\n==================================================\n";
    std::cout << "              My Stack Test";
    std::cout << "\n==================================================\n";
    std::cout << "Initial List Contents:\n";
    stk1.Print();

    std::cout << "\n--------------------\n";
    std::cout << "Size is [" << stk1.Size() << "]";
    std::cout << "\n--------------------\n";
    std::cout << "Is empty [" << (stk1.IsEmpty() ? "True" : "False") << "]";
    std::cout << "\n--------------------\n";

    std::cout << "The item at index 3 is [" << stk1.GetItem(3) << "]";
    std::cout << "\n--------------------\n";

    stk1.UpdateItem(3, 40);
    std::cout << "After updating index 3 to 40:\n";
    stk1.Print();
    std::cout << "\n--------------------\n";

    stk1.InsertAfter(2, 8);
    std::cout << "After inserting 8 after index 2:\n";
    stk1.Print();
    std::cout << "\n--------------------\n";

    std::cout << "After reversing the list:\n";
    stk1.Reverse();
    stk1.Print();
    std::cout << "\n--------------------\n";

    stk1.Clear();
    std::cout << "After clearing the list:\n";
    std::cout << "Size is [" << stk1.Size() << "]\n";
    std::cout << "Is empty [" << (stk1.IsEmpty() ? "True" : "False") << "]\n";
    std::cout << "==================================================\n";
}

int main()
{
    DynamicArray();
    MyQueArr();
    MyStackArr();
    TestDblLinkedList();
    TestMyQueue();
    TestMyStack();
}