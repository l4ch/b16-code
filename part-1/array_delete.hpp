#ifndef __array_delete__
#define __array_delete__

#include <cstddef>
#include <utility>
#include <vector>

template <typename T>
void array_delete(std::vector<T> &A, std::size_t index)
{
    vector<T>:: iterator it
    for (it = index; it = size(A) - 1; it++){
        *it = *(it + 1)
            }
    A.resize(size(A) - 1)
}

#endif // __array_delete__
