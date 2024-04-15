
/* Two namespaces can have same names, but members / elements of namespace should be different. */

#include <iostream>
using namespace std;
namespace first
{
    int x=10;
}
namespace first
{
    int y=20;
}

int main()
{
    using namespace first;
    cout<<x<<" "<<y<<endl;
}
