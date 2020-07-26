#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 100 75 95 60 65 90

class maxheap
{
    vector<int> v = {-1};
    int _size{};

public:
    int p(int i) { return i >> 1; }; // i/2

    int l(int i) { return i << 1; }; //i*2

    int r(int i) { return 2 * i + 1; }; //i*2 + 1

    int getMax() { return v[1]; };

    bool isEmpty() { return _size == 0; };

    void insertItem(int val);

    int extractMax();

    void shiftUp(int i);

    void shiftDown(int i);
};

void maxheap::insertItem(int val)
{
    if (_size + 1 >= v.size())
    {
        v.push_back(0);
    }

    v[++_size] = val;
    shiftUp(_size);
}

void maxheap::shiftUp(int i)
{
    if (i == 1 || i > _size)
    {
        return;
    }
    if (v[i] > v[p(i)])
    {
        swap(v[i], v[p(i)]);
    }
    shiftUp(p(i));
    return;
}

void maxheap::shiftDown(int i)
{
    int swapId = i;

    if (v[l(i)] > v[i] && l(i) <= _size)
    {
        swapId = l(i);
    }
    if (v[r(i)] > v[swapId] && r(i) <= _size)
    {
        swapId = r(i);
    }
    if (swapId != i)
    {
        swap(v[i], v[swapId]);
        shiftDown(swapId);
    }
    return;
}

int maxheap::extractMax()
{
    int max = v[1];
    swap(v[1], v[_size--]);
    shiftDown(1);
    return max;
}

int main()
{
    // maxheap *PriorityQueue = new maxheap;
    // if(PriorityQueue->isEmpty())
    // {
    //     cout<<"correct\n";
    // }
    // else
    // {
    //     cout<<"not correct\n";
    // }
    // PriorityQueue->insertItem(10);
    // PriorityQueue->insertItem(100);
    // PriorityQueue->insertItem(70);
    // PriorityQueue->insertItem(40);
    // PriorityQueue->insertItem(65);
    // PriorityQueue->insertItem(15);

    // if(PriorityQueue->isEmpty())
    // {
    //     cout<<"correct\n";
    // }
    // else
    // {
    //     cout<<"not correct\n";
    // }
    // cout<<PriorityQueue->getMax()<<endl;
    // PriorityQueue->extractMax();
    // cout<<PriorityQueue->getMax()<<endl;


    /**
     * 10 30 15 35 60 20 // O(n) + O(logn)
     * 
    */

    priority_queue<int,vector<int>> pq;

    if (pq.empty())
    {
        cout << "correct\n";
    }
    else
    {
        cout << "not correct\n";
    }

    pq.push(10);
    pq.push(100);
    pq.push(70);
    pq.push(40);
    pq.push(65);
    pq.push(15);

    if (!pq.empty())
    {
        cout << "correct\n";
    }
    else
    {
        cout << "not correct\n";
    }
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}