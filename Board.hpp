#include "Direction.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

class Board
{
    

    public:
        void post(unsigned int row, unsigned int col, ariel::Direction, string content);
        string read(unsigned int row, unsigned int col, ariel::Direction, unsigned int length);
        void show(unsigned int row, unsigned int col, ariel::Direction, unsigned int length);
};
