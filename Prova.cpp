#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    double *notasQuestoes = new double[nq];
    cout << "Criando uma prova" << endl;

    n = nq;
}

Prova::~Prova()
{
    delete [] notasQuestoes;
}
// exercicio 7
void Prova::leNotas()
{
    for(int i = 0; i < n; i++)
    {
        cin >> notasQuestoes[i];
    }
}

void Prova::getMenorNota()
{
    MenorNota = notasQuestoes[0];

    for(int i = 1; i < n; i++)
    {
        if(MenorNota > notasQuestoes[i])
        {
            MenorNota = notasQuestoes[i];
        }
    }
}

void Prova::calculaNotaFinal()
{
    notaFinal = 0;
    for(int i = 0; i < n; i++)
    {
        notaFinal = notaFinal + notasQuestoes[i];
    }
    notaFinal = notaFinal - MenorNota;
}

double Prova::obtemNotaFinal()
{
    calculaNotaFinal();
    return notaFinal;
}
