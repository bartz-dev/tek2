/*
** EPITECH PROJECT, 2020
** B-CPP-300-LYN-3-1-CPPD08-clement.fleur
** File description:
** Droid.hpp
*/

#ifndef DROID_D
#define DROID_D

#include "DroidMemory.hpp"
#include <string>

class Droid
{
    std::string Serial;
    size_t Energy;
    const size_t Attack;
    const size_t Toughness;
    std::string *status;
    DroidMemory *BattleData;

    public:
        explicit Droid(std::string str);
        explicit Droid(Droid const &droid);
        ~Droid();

        //getter
        std::string getId() const;
        size_t getEnergy() const;
        size_t getAttack() const;
        size_t getToughness() const;
        std::string *getStatus() const;
        DroidMemory *getBattleData() const;
        void setBattleData(DroidMemory *droid_memory);

        //setter
        void setId(std::string new_serial);
        void setEnergy(size_t new_energy);
        void setStatus(std::string *new_status);

        //operator
        bool operator==(Droid const &droid) const;
        bool operator!=(Droid const &droid) const;
        Droid& operator=(Droid const &droid);
        Droid& operator<<(size_t &size);
};

std::ostream& operator<<(std::ostream &os, const Droid &energy);

#endif // !DROID_D
