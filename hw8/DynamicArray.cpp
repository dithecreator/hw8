//
//  DynamicArray.cpp
//  hw8
//
//  Created by Дима on 14.09.23.
//

#include "DynamicArray.hpp"


DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
//    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S];
}


DynamicArray DynamicArray::operator +(int s){
    return DynamicArray(this-> size + s);
};

DynamicArray DynamicArray::operator -(int s){
    return DynamicArray(this-> size - s);
};

DynamicArray DynamicArray::operator -(DynamicArray b){
    DynamicArray result = *this;
    for(int i = 0; i < size; i++){
        result.ptr[i] = ptr[i] - b.ptr[i];
    }
    return result;
};



DynamicArray DynamicArray::operator +(DynamicArray b){
    DynamicArray result = *this;
    for(int i = 0; i < size; i++){
        result.ptr[i] = ptr[i] + b.ptr[i];
    }
    return result;
};
DynamicArray& DynamicArray::operator ++(){
    int* newArray = new int[size];

    size += 1;
    delete[] ptr;
    ptr = newArray;
    return *this;
};
DynamicArray& DynamicArray::operator --(){
    int* newArray = new int[size];
    size -= 1;
    delete[] ptr;
    ptr = newArray;
    return *this;
};


DynamicArray DynamicArray::operator *(int x){
    DynamicArray newArray = *this; //передаём точную копию левостороннего обьекта
    for(int i = 0; i < size; i++){
        newArray.ptr[i] *= x;
    }
    return newArray;
};


DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
//    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}
DynamicArray::~DynamicArray()
{
//    cout << "Destruct\n";
//    if (ptr != 0)
//    {
//        delete[] ptr;
//    }
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output()
{
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i] <<"\t";
    }
    cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer()
{
    return ptr;
}
int DynamicArray::GetSize()
{
    return size;
}
