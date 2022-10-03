#include "Aluno.h"
#include <iostream>

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    // Implemente sua solucao aqui
    for(int i = 0; i < 7; i++)
    {
        cin >> notas[i];
    }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    int soma = 0;
    for(int i = 0; i < 7; i++)
    {
        soma = soma + notas[i];
    }
    return soma / 7;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
void Aluno::setIdade(int n)
{
    idade = n;
}

void Aluno::setMatricula(string n)
{
    matricula = n;
}

int Aluno::getIdade()
{
    return idade;
}

string Aluno::getMatricula()
{
    return matricula;
}
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao


// ----------------------------------------------------------------------------
// Exercicio 5
// ----------------------------------------------------------------------------

bool Aluno::setFrequencia()
{
    for(int i = 0; i < 7; i++)
    {
        cin >> frequencia[i];
    }
}

void Aluno::relatorio()
{
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Matricula: " << getMatricula() << endl;
    for(int i = 0; i < 7; i++)
    {
        if(notas[i] >= 60)
        {
            cout << "disciplina: " << i << " aprovado" << endl;
        }
        else
        {
            cout << "disciplina: " << i << " reprovado" << endl;
        }
    }

    cout << "Frequencia" << endl;

        for(int i = 0; i < 7; i++)
    {
        if(frequencia[i] == 0)
        {
            cout << "disciplina: " << i << " infrequente" << endl;
        }
        else
        {
            cout << "disciplina: " << i << " frequente" << endl;
        }
    }
}

