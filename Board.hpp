#include "Direction.hpp"
#include <iostream>
#include <map>
using namespace std;
using namespace ariel;


namespace ariel
{
    class Board
    {
        public:
        void post(uint row, uint col, ariel::Direction, string message);
        static string read(uint row, uint col, ariel::Direction, uint length);
        void show();
    };
}
