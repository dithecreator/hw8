#pragma once
#include "DynamicArray.hpp"
#include <iostream>
using namespace std;


DynamicArray GetObj() //‚ÓÁ‚‡Ú ÔÓ ÁÌ‡˜ÂÌË˛
{
    DynamicArray obj(3);
    obj.Input();

    return obj;
}
int main()
{
    DynamicArray a(5); // constructor 1 param
    a.Input();
    a.Output();
    DynamicArray b = a; // copy constructor
    cout << "array b: " << endl;
    b.Output();

    DynamicArray rezult = GetObj();

    DynamicArray array = a + 10; //увеличение количества элементов на 10
    array.Input();
    array.Output();
    int askSize = a.GetSize();
    if(askSize > 2){ //уменьшаем размер массива на 2
        DynamicArray array1 = a - 2;
        array1.Input();
        array1.Output();
    }
    DynamicArray c(5);
    c.Input();
    cout << "array c: " << endl;
    c.Output();
    DynamicArray d(5);
    d = c * 2; //умножаем каждый элемент на 2
    d.Output();
    d = c - b;
    d.Output(); //разность массивов
    
    d = c + b; //сумма элементов массивов
    d.Output();
    
    
    DynamicArray e(0);

    DynamicArray ec = ++e;
    ec.Input();
    ec.Output();
    
    DynamicArray mass(2);
    
    DynamicArray rec = --mass;
    rec.Input();
    rec.Output();
}
