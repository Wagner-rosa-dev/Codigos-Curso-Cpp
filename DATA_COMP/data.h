#ifndef DATA_H
#define DATA_H

#include <compare>
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
                   (m_ano >= YEAR_MIN && m_ano <= YEAR_MAX ));
    }

    void print() const;

    short lastDayOfMonth() const;

    bool isLeapYear() const;

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

    auto operator<=>(const DATA &other) const{
        if (const auto cmp = m_ano <=> other.m_ano; cmp != 0) return cmp;
        if (const auto cmp = m_mes <=> other.m_mes; cmp != 0) return cmp;
        return m_dia <=> other.m_dia;
    }

    bool operator==(const DATA &other) const{
        return (*this <=> other) == 0;
    }
a = 1000
b = 100
        cmp = a <=> b;
    if (cmp > 0) cout


private:
    short m_dia;
    short m_mes;
    short m_ano;
    bool m_valid {false};



};

#endif // DATA_H
