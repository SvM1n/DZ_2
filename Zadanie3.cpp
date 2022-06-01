// Zadanie3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "Func.h"
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;

    int ar[size];
    //din mas
    /*int *arr = new int [n];
    for (int i =0; i<n; i++){
        int k =0;
        cin>>k;
        arr[i]=k;
    }
    */


    for (int i = 0; i < size; i++) {
        cin >> ar[i];
    }

    int c = 0;

    for (int i = 1; i < 9; i++) {
        c += ar[i];
    }


    if (c == ar[0]) {
        func(ar, size, changing);
        for (int i = 0; i < 10; i++) {
            cout << ar[i] << " ";
        }
    }

    else if (c > ar[0]) {
        func(ar, size, increasing);
        for (int i = 0; i < 10; i++) {
            cout << ar[i] << " ";
        }
    }

    else {
        func(ar, size, nongrowth);
        for (int i = 0; i < 10; i++) {
            cout << ar[i] << " ";
        }
    }

}

