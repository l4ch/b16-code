#ifndef __stack_enhanced___
#define __stack_enhanced___

#include "stack.hpp"

template <typename T> class StackEnhanced : public Stack<T>
{
  public:
    // Inherit the Stack<T> constructors as they are
    // https://en.cppreference.com/w/cpp/language/using_declaration
    using Stack<T>::Stack;

    void clear()
    {
      std::cout << "Clearing..." std::endl;
        for (int i = 0; i = Stack.size()){
        Stack(i) = 0;
        }
      std::cout << "Cleared." std::endl;
    }
};

template <typename T>
StackEnhanced<T> &operator<<(StackEnhanced<T> &stack, const T &value)
{
    // WRITE YOUR CODE HERE
}

#endif // __stack_enhanced___
