//
// Created by cheetos on 4/10/18.
//
#include <cstdlib>

class Map
{
    private:
        int width;
        int height;
        int rocks;
        int herb;
        int type;
        int monsters;
        char **map;

    public:
        Map(int width, int height, int rocks, int herb, int type, int monsters)
        {
            this->width = width;
            this->height = height;
            this->rocks = rocks;
            this->herb = herb;
            this->type = type;
            this->monsters = monsters;
        }

        ~Map()
        {
            // DESTRUCTOR
        }

        void create();
};