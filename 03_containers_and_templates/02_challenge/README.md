# Challenge 2

Create a class template called `Stack` that mimics the behavior of a stack. This class should have the following member functions:

- `void push(const T& value)`, which pushes a value onto the stack.
- `void pop()`, which pops the top value off the stack.
- `T top() const`, which returns the value on the top of the stack.
- `bool is_empty() const`, which returns if the stack is empty.

Use a standard library container (e.g., `std::vector`, `std::list`, or `std::deque`) as the underlying data structure for the stack. Test your class with at least two different types of containers.
