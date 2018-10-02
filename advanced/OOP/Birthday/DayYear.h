//
// Created by cheetos on 2/10/18.
//

class DayYear
{
    private:
        int month;
        int day;

    public:
        DayYear(int _day, int _month)
        {
            month = _day;
            day = _month;
        }
        DayYear()
        {
            month = day = 1;
        }

        bool igual(DayYear& dm);
        void visualizar();
};