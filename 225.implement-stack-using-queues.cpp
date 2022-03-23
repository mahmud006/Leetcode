/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;

    MyStack()
    {
    }
    void push(int x)
    {
        q2.push(x);
        if (!q1.empty())
        {
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
        q1.swap(q2);
    }

    int pop()
    {
        int tmp = q1.front();
        q1.pop();
        return tmp;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
