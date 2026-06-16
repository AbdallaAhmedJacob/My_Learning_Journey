#pragma once

template<class T>
class clsDblLinkedList
{
protected:
    int _Size = 0;

public:

    class Node
    {
    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    Node* CreatNode(Node* Prev, Node* Next, T Value)
    {
        Node* NewNode = new Node();

        NewNode->value = Value;
        NewNode->prev = Prev;
        NewNode->next = Next;

        _Size++;
        return NewNode;
    }

    void InsertAtBiginig(T Value)
    {
        if (head == NULL)
        {
            head = CreatNode(NULL, NULL, Value);
            return;
        }

        Node* NewNode = new Node;

        if (head != NULL)
        {
            NewNode = CreatNode(NULL, head, Value);
            head->prev = NewNode;
            head = NewNode;
            return;
        }
    }

    void Print()
    {
        Node* Current = new Node;
        Current = head;

        if (Current == NULL)
            return;

        while (Current != NULL)
        {
            std::cout << Current->value << std::endl;
            Current = Current->next;
        }

        delete Current;
    }

    void InsertAfter(Node*& head, T Value)
    {
        Node* NewNode;

        if (head == NULL)
            return;

        if (head->next != NULL)
        {
            NewNode = CreatNode(head, head->next, Value);
            head->next->prev = NewNode;
            head->next = NewNode;
        }
        else
        {
            NewNode = CreatNode(head, NULL, Value);
            head->next = NewNode;
        }
    }

    void InsertAtEnd(T Value)
    {
        Node* Current = head;

        if (Current == NULL)
        {
            head = CreatNode(NULL, NULL, Value);
            return;
        }

        while (Current->next != NULL)
        {
            Current = Current->next;
        }

        Current->next = CreatNode(Current, NULL, Value);
    }

    Node* Find(T Value)
    {
        Node* Current = head;

        while (Current != NULL)
        {
            if (Current->value == Value)
            {
                return Current;
            }
            Current = Current->next;
        }
        return NULL;
    }

    void DeleteNode(Node*& node)
    {
        Node* Current = new Node;
        Current = node;

        if (Current == NULL)
            return;

        if (Current->next != NULL && Current->prev != NULL)
        {
            Current->next->prev = Current->prev;
            Current->prev->next = Current->next;

            delete Current;
            _Size--;
            return;
        }

        if (Current->next != NULL && Current->prev == NULL)
        {
            Current->next->prev = NULL;
            head = Current->next;

            delete Current;
            _Size--;
            return;
        }

        if (Current->next == NULL && Current->prev != NULL)
        {
            Current->prev->next = NULL;

            delete Current;
            _Size--;
            return;
        }

        if (Current->next == NULL && Current->prev == NULL)
        {
            delete Current;
            head = NULL;
            _Size--;
            return;
        }
    }

    void DeleteNode(T Value)
    {
        if (head == NULL)
            return;

        Node* Current = head;

        if (Current->value == Value)
        {
            DeleteNode(Current);
            return;
        }

        while (Current != NULL && Current->value != Value)
        {
            Current = Current->next;
        }

        if (Current == NULL)return;

        DeleteNode(Current);
    }

    void DeleteFirstNode()
    {
        Node* First = head;

        if (head == NULL)
            return;
        else
            DeleteNode(First);

    }

    void DeleteLastNode()
    {
        Node* Current = head;

        if (Current == NULL)
            return;

        while (Current->next != NULL)
        {
            Current = Current->next;
        }

        if (Current == NULL)
            return;

        DeleteNode(Current);
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (head == NULL);
        //return (_Size == 0);
        //return _Size;
    }

    void Clear()
    {
        if (head == NULL)
            return;

        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }

    void  Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    Node* GetNode(int index)
    {
        if (index <0 || index >_Size - 1)return NULL;

        Node* Current = head;
        int Counter = 0;

        while (Current != NULL && Current->next != NULL)
        {
            if (Counter == index)
                break;

            Current = Current->next;
            Counter++;
        }

        return Current;
    }

    T GetItem(int index)
    {
        return GetNode(index)->value;
    }

    void UpdateItem(int index, T NewValue)
    {
        GetNode(index)->value = NewValue;
    }

    bool InsertAfter(int index, T value)
    {
        Node* ItemNode = GetNode(index);

        if (ItemNode != NULL) {
            InsertAfter(ItemNode, value);
            return true;
        }
        else
            return false;
    }
};