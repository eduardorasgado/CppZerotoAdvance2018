//
// Created by cheetos on 4/10/18.
//
#include <cstdlib>

class Map
{
    private:
        int size;
        int rocks;
        int herb;
        int type;
        int monsters;
        char **map;

    public:
        Map()
        {

        }

        ~Map()
        {
            // DESTRUCTOR
        }

        void create();
        void destroy();
        void showMap();
};