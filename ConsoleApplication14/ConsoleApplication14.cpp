
#include <iostream>
using namespace std;
template<typename T>
class MyList {
private:
    T* strings;
    int capacity;
    int currentIndex;
    int size;
public:
    MyList(int capacity = 3)
    {
        this->currentIndex = 0;
        this->capacity = capacity;
        this->size = capacity;
        strings = new T[this->size];

    }
    void addElement(T element)
    {
        if (currentIndex >= size)
        {
            T* tmp = new T[this->size + capacity];
            for (int i = 0; i < this->size; i++)
            {
                tmp[i] = strings[i];
            }
            this->strings = tmp;

            this->size += this->capacity;
        }

        strings[currentIndex] = element;
        currentIndex++;
    }
    T getElement(int index)
    {
        if (index < this->size)
            return this->strings[index];

    }
    int getSize()
    {
        return this->currentIndex;
    }
};
int main()
{

}

