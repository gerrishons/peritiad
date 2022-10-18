#include<ctime>
#include<cstdlib>
#include<memory>
#include<vector>

using namespace std;

std::vector<int> randomize()
{
    srand(time(0));

    const int choices [] = {1,2,3,4,5,6,7,8,9};

    std::vector<int> random;
    for(int i = 0; i <1; i++)
    {
        random.push_back(choices[rand() % 5]);
    }
    return random;
}

