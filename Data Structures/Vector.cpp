#include<bits/stdc++.h>
using namespace std;

/*
 * Vector methods 
 * 1- push back
 * 2- push Front
 * 3- Pop back
 * 4- pop front
 * 5- erase
 * 6- Fornt
 * 7- Back
 */


class  Vector{
    int* data;
    int capacity;
    int size;

public:
    // First Constructor
    Vector(){
        data = nullptr ;
        capacity =0 ;
        size = 0 ;
    }

//     Second Constructor
    Vector(int sz, int val){ // Not a template
        data = new int[sz];
        // Saving data.
        for (int i=0 ; i<sz ; i++){
            data[i] = val ;
        }
        capacity = size = sz ;
    }

    // Third Constructor
    Vector(int sz){ // Not a template
        data = new int[sz];
        // Saving data.
        for (int i=0 ; i<sz ; i++){
            cin >> data[i]  ;
        }
        capacity = size = sz ;
    }


    // Fourth Constructor
    Vector(const Vector &cpy){
        copy(cpy);
    }

    int _size() const{
        return size ;
    }

    int _capacity() const{
        return  capacity ;
    }

    bool empty () const{
        return size == 0 ;
    }

    int back () const{
        // Exception Handling
        return data[size-1];
    }

    int front () const{
        // Exception Handling
        return data[0];
    }

    void copy (const Vector &cpy){

        if(data != nullptr) {
            delete[]data;
            data = nullptr;
        }

        capacity = size = cpy._size();
        data = new int[capacity];
        for (int i=0 ; i< size ; ++i )
        {
            data[i] = cpy.data[i];
        }
    }

    Vector &operator =  (const Vector &cpy){
        copy(cpy);
        return *this ;
    }


    void update_cap (int new_cap){
        int *tmp = new int [new_cap];
        for (int i=0 ; i<size ; ++i)
            tmp[i] = data[i];
        for (int i= size ; i<new_cap ; i++)
            tmp[i] = 0;
        capacity = new_cap ;
        swap(data , tmp ) ;
        delete []tmp ;
        tmp = nullptr ;
    }

    void reserve (int new_capacity ){
        if(new_capacity < size ){ return;}
        else {update_cap(new_capacity);}

    }

    void push_back(const int value){
        if (size == capacity){
            reserve((capacity << 1) + (capacity == 0 ));
        }
        data[size++]  = value ;
    }

    void clear (){
        size = capacity = 0 ;
        if (data != nullptr) {
            delete[]data;
            data = nullptr; }

    }

    int operator [] (int idx){
        return data[idx];
    }



    ~Vector(){};
};



int main()
{
    Vector x;
    x.push_back(3);
    x.push_back(4);
    x.push_back(6);
    x.push_back(9);
    for (int i=0 ; i<4  ;i++)
        cout << x[i] << " " ;

    cout << endl ;
    cout << "size = " << x._size() << endl ;
    cout << "back = " << x.back() << endl ;
    cout << "front = " << x.front();
    

    return 0;
}
