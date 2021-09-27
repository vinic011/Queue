#include <iostream>
#include <queue>

using queue = std::queue<int>;

void print1(queue& q)
{
    queue aux;
    while(!q.empty())
    {
        std::cout << q.back();
        aux.push(q.back());
        q.pop();
    }
    while(!aux.empty())
    {
        q.push(aux.back());
        aux.pop();
    }
}

void print2(queue& q)
{
    queue aux;
    while(!q.empty())
    {
        aux.push(q.front());
        q.pop();
        std::cout << aux.back();
    }
    while(!aux.empty())
    {
        q.push(aux.front());
        aux.pop();
    }
}

queue reverse(queue& q)
{
    queue result;
    queue aux;
    while(!q.empty())
    {
        aux.push(q.back());
        result.push(q.back());
        q.pop();
    }
    while(!aux.empty())
    {
        q.push(aux.back());
        aux.pop();
    }

    return result;
}

queue merge(queue& a, queue& b)
{
    
}

int main()
{

}
