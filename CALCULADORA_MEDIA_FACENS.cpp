// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    // Variaveis
    double ac1, ac2, ag, af;
    string continuar = "S";
    string nome;
    int ra;
    // Programa roda o codigo enquando o usuario quiser baseado em um string
    do{
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o nome do aluno: " << endl;
    // Registrando input do usuario
    cin >> nome;
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o RA do aluno: " << endl;
    // Registrando input do usuario
    cin >> ra;
    // Pedindo input do usuario para primeira nota
    cout << "Digite a nota da avaliacao 1: " << endl;
    // Registrando input do usuario
    cin >> ac1;
    // Pedindo input do usuario para segunda nota
    cout << "Digite a nota da avaliacao 2: " << endl;
    // Registrando input do usuario
    cin >> ac2;
    // Pedindo input do usuario para terceira nota
    cout << "Digite a nota da avaliacao geral: " << endl;
    // Registrando input do usuario
    cin >> ag;
    // Pedindo input do usuario para quarta nota
    cout << "Digite a nota da avaliacao final: " << endl;
    // Registrando input do usuario
    cin >> af;
    // Calculando media das notas usando o calculo da faculdade Facens
    double soma= (ac1*1.5+ac2*3.5+ag*1+af*4);
    soma = soma/10;
    // Mostrando resultado da media para o usuario
    cout << "A sua media no semestre foi: " << soma << endl << endl;
    // Mostrando resultado de aprovacao ou reprovacao para o usuario
    switch((int)soma){
    case 10: 
    case 5: cout << "Parabens, " << nome << " (RA:  " << ra << ") voce foi aprovado!" << endl;// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    // Variaveis
    double ac1, ac2, ag, af;
    string continuar = "S";
    string nome;
    int ra;
    // Programa roda o codigo enquando o usuario quiser baseado em um string
    do{
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o nome do aluno: " << endl;
    // Registrando input do usuario
    cin >> nome;
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o RA do aluno: " << endl;
    // Registrando input do usuario
    cin >> ra;
    // Pedindo input do usuario para primeira nota
    cout << "Digite a nota da avaliacao 1: " << endl;
    // Registrando input do usuario
    cin >> ac1;
    // Pedindo input do usuario para segunda nota
    cout << "Digite a nota da avaliacao 2: " << endl;
    // Registrando input do usuario
    cin >> ac2;
    // Pedindo input do usuario para terceira nota
    cout << "Digite a nota da avaliacao geral: " << endl;
    // Registrando input do usuario
    cin >> ag;
    // Pedindo input do usuario para quarta nota
    cout << "Digite a nota da avaliacao final: " << endl;
    // Registrando input do usuario
    cin >> af;
    // Calculando media das notas usando o calculo da faculdade Facens
    double soma= (ac1*1.5+ac2*3.5+ag*1+af*4);
    soma = soma/10;
    // Mostrando resultado da media para o usuario
    cout << "A sua media no semestre foi: " << soma << endl << endl;
    // Mostrando resultado de aprovacao ou reprovacao para o usuario
    switch((int)soma){
    case 10:
    case 9:
    case 8:
    case 7:
    case 6: 
    case 5: cout << "Parabens, " << nome << " (RA:  " << ra << ") voce foi aprovado!" << endl << endl;
        break;
    case 4:
    case 3: cout << nome << " (RA:  " << ra << "), voce vai para a recuperacao!" << endl << endl;
        break;
    default: cout << nome << " (RA:  " << ra << "), infelizmente voce foi reprovado!" << endl << endl;
    };// Informa ao usuario que pode continuar, mudando a string
    cout << "Quer continuar? Digite S" << endl;
    cin >> continuar;
    } while(continuar == "S" || continuar ==  "s");
    
    return 0;
}
    break;
    case 4:
    case 3: cout << nome << " (RA:  " << ra << "), voce vai para a recuperacao!" << endl;
    break;
    default: cout << nome << " (RA:  " << ra << "), infelizmente voce foi reprovado!" << endl;
    };// Informa ao usuario que pode continuar, mudando a string
    cout << "Quer continuar? Digite S" << endl;
    cin >> continuar;
    } while(continuar == "S" || continuar ==  "s");
    
    return 0;
}
