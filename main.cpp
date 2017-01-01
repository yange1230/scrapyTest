#include <iostream>

using namespace std;

int main()
{
    string str="this\0is\0a book";
    int t=str.size();
    cout<<t<<endl;

    return 0;
}
