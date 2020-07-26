#include <bits/stdc++.h>
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;

class maxheap
{
    vector<int> v = {-1};
    int _size{};
    int p(int i) { return i / 2; }; // i>>1
    int l(int i) { return 2 * i; }; // i<<1
    int r(int i) { return 2 * i + 1; };

public:
    bool isEmpty() { return _size == 0; };

    int getMax() { return v[1]; };

    void insertItem(int val);

    void shiftUp(int i);

    int extractMax();

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
    if (i > _size)
    {
        return;
    };
    if (i == 1)
    {
        return;
    };
    if (v[i] > v[p(i)])
    {
        swap(v[p(i)], v[i]);
    };
    shiftUp(p(i));
}

void maxheap::shiftDown(int i)
{
    if (i > _size)
    {
        return;
    };

    int swapId = i;
    if (l(i) <= _size && v[i] < v[l(i)])
    {
        swapId = l(i);
    }
    if (r(i) <= _size && v[swapId] < v[r(i)])
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
    maxheap *PriorityQueue = new maxheap();
    if (PriorityQueue->isEmpty())
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "Error\n";
    }
    PriorityQueue->insertItem(10);
    PriorityQueue->insertItem(120);
    PriorityQueue->insertItem(34);
    PriorityQueue->insertItem(41);
    PriorityQueue->insertItem(5);
    cout << PriorityQueue->getMax() << "\n";
    PriorityQueue->extractMax();
    cout << PriorityQueue->getMax() << "\n";
    if (PriorityQueue->isEmpty())
    {
        cout << "Correct\n";
    }
    else
    {
        cout << "Error\n";
    }
    return 0;
}