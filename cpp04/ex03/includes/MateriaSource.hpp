#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materias[4];
    
    public:
        MateriaSource();
        MateriaSource(MateriaSource &src);
        MateriaSource &operator=(MateriaSource &src);

        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        
        AMateria *getMateria(int i);
};

#endif