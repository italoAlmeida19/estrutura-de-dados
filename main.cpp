#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    //a.leNotas();
    //double m = a.calculaMedia();

    //cout << "Media do aluno: " << m << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    /*a.setIdade(20);
    a.setMatricula("1234");
    a.setNome("Italo");
    a.setFrequencia();
    cout << "Idade: " << a.getIdade() << endl;
    cout << "Matricula: " << a.getMatricula() << endl;
    cout << "Nome: " << a.getNome() << endl;*/
    //a.relatorio();

    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    Prova p(3);
    p.leNotas();
    cout << p.obtemNotaFinal();
    return 0;
}
