#ifndef PROVA_H
#define PROVA_H

#include <iostream>

using namespace std;

class Prova
{
    public:
        Prova(int nq);
        ~Prova();
        void leNotas();
        void calculaNotaFinal();
        double obtemNotaFinal();
        void getMenorNota();

    private:
        int n;
        double notaFinal;
        double *notasQuestoes;
        int MenorNota;
};

#endif // PROVA_H
