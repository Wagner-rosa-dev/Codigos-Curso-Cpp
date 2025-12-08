#ifndef DATA_H
#define DATA_H

#include <stdio.h>

class DATA{

public:
    enum { YEAR_MIN = 1900, YEAR_MAX = 2100 };
    enum { FEVEREIRO = 2, JULHO = 7 };

    DATA() = default;

    DATA(short dia, short mes, short ano){
        change(dia, mes, ano);
    };

    void change(short dia, short mes, short ano);

    void validate()
    {
        m_valid = ((m_dia >= 1 && m_dia <= lastDayOfMonth()) &&
                   (m_mes >= 1 && m_mes <= 12) &&
                   (m_ano >= YEAR_MIN && m_ano <= YEAR_MAX));
    }

    void print() const;

    short lastDayOfMonth() const;

    bool isLeapYear(short year) const;

    short dia() const
    {
        return m_dia;
    }

    short mes() const
    {
        return m_mes;
    }

    short ano() const
    {
        return m_ano;
    }

private:
    short m_dia;
    short m_mes;
    short m_ano;
    bool m_valid {false};



};

#endif // DATA_H
