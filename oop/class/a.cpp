#include <iostream>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

class abc
{
public:
	abc()
	{
		cout<<"abc construtor\n";
	}

};

int main()
{
	OJ;
	abc a;
	return 0;
}
