#include <ctime>
#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        printf("%d: %d\n", i, rand() % 100);
    return 0;
}