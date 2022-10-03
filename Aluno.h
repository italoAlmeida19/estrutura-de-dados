#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();

        // exercicio 2
        void setMatricula(string n);
        string getMatricula();
        void setIdade(int n);
        int getIdade();
        // exercicio 5
        bool setFrequencia();
        void relatorio();

    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 3
        // implemente aqui

        // exercicio 4
        bool frequencia[7];
};

#endif // ALUNO_H
