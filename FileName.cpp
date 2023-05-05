#include <iostream>
using namespace std;

void update_count();

int main()
{
    update_count();

    update_count();
}

void update_count()
{
    static int count = 0;
    count++;
    cout << count << endl;
}