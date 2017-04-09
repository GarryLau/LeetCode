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
