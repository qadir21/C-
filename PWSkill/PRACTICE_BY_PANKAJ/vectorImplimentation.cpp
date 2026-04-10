#include <iostream>
using namespace std;

template<typename T>
class DynamicArray {

private:

    T* _M_start;
    T* _M_finish;
    T* _M_end_of_storage;

    void reallocate()
    {
        size_t old_size = size();
        size_t new_capacity = old_size == 0 ? 1 : old_size * 2;

        T* new_mem = new T[new_capacity];

        for(size_t i = 0; i < old_size; i++)
            new_mem[i] = _M_start[i];

        delete[] _M_start;

        _M_start = new_mem;
        _M_finish = new_mem + old_size;
        _M_end_of_storage = new_mem + new_capacity;
    }

public:

    DynamicArray()
    {
        _M_start = nullptr;
        _M_finish = nullptr;
        _M_end_of_storage = nullptr;
    }

    DynamicArray(size_t n, const T& value = T())
    {
        _M_start = new T[n];

        for(size_t i = 0; i < n; i++)
            _M_start[i] = value;

        _M_finish = _M_start + n;
        _M_end_of_storage = _M_start + n;
    }

    ~DynamicArray()
    {
        delete[] _M_start;
    }

    size_t size() const
    {
        return _M_finish - _M_start;
    }

    size_t capacity() const
    {
        return _M_end_of_storage - _M_start;
    }

    bool empty() const
    {
        return size() == 0;
    }

    T& operator[](size_t n)
    {
        return *(_M_start + n);
    }

    const T& operator[](size_t n) const
    {
        return *(_M_start + n);
    }

    T& front()
    {
        return *_M_start;
    }

    T& back()
    {
        return *(_M_finish - 1);
    }

    void push_back(const T& value)
    {
        if(_M_finish == _M_end_of_storage)
        {
            reallocate();
        }

        *_M_finish = value;
        ++_M_finish;
    }

    void pop_back()
    {
        if(!empty())
            --_M_finish;
    }

    void clear()
    {
        _M_finish = _M_start;
    }

    void reserve(size_t new_cap)
    {
        if(new_cap <= capacity())
            return;

        size_t old_size = size();

        T* new_mem = new T[new_cap];

        for(size_t i = 0; i < old_size; i++)
            new_mem[i] = _M_start[i];

        delete[] _M_start;

        _M_start = new_mem;
        _M_finish = new_mem + old_size;
        _M_end_of_storage = new_mem + new_cap;
    }

};

int main()
{
    DynamicArray<int> a;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    for(int i=0;i<a.size();i++) cout << a[i] << " ";
    cout << endl;

}