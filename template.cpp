#include<iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }

}

int main()
{
    cout<<myMax<int>(7,2)<<endl;
    cout<<myMax<float>(9.0,8.0)<<endl;
    cout<<myMax<double>(2.0,2.0)<<endl;
    return 0;

}