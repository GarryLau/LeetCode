/*
Min StackDesign a stack that supports push, pop, top, and retrieving the minimum element in constant time. 
• push(x) -- Push element x onto stack. 
• pop() -- Removes the element on top of the stack. 
• top() -- Get the top element. 
• getMin() -- Retrieve the minimum element in the stack.
Example:
MinStack minStack = new MinStack(); 
minStack.push(-2); 
minStack.push(0);
minStack.push(-3);
minStack.getMin();                   --> Returns -3. 
minStack.pop(); minStack.top();      --> Returns 0. 
minStack.getMin();                   --> Returns -2.
*/

#include <stack>
class MinStack
{
public:
    MinStack();
    ~MinStack(); 
void push(int number) 
{
    st1.push(number);
    if (st2.empty() || getMin() >= number)
    {
        st2.push(number);
    }
} 
void pop()
{
    if (st1.top() == getMin())
    {
        st2.pop();
    }
    st1.pop(); 
} 
int top()
{
    return st1.top(); 
} 
int getMin()
{
    return st2.top(); 
}
private:
    std::stack<int> st1;
    std::stack<int> st2;
};

MinStack::MinStack(){}

MinStack::~MinStack(){}
