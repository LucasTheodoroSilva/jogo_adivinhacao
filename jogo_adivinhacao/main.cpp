#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Cabe�alho
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao! *" << endl;
    cout << "**************************************" << endl;

    cout << "Escolha o seu nivel de dificuldade: " << endl;
    cout << "Facil (F)" << endl;
    cout << "Medio (M)" << endl;
    cout << "Dificil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_tentativas;

    if (dificuldade == 'F')
    {
        numero_tentativas = 15;
    }
    else if (dificuldade == 'M')
    {
        numero_tentativas = 10;
    }
    else
    {
        numero_tentativas = 5;
    }

    // const � um valor que n�o pode ser alterado durante a execu��o do programa.
    const int NUMERO_SECRETRO = 42;
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;

    // Estrutura de repeti��o (Enquanto)
    for (tentativas = 1; tentativas <= numero_tentativas; tentativas++)
    {
        int chute;
        cout << endl
             << "Tentativa n " << tentativas;
        cout << endl
             << "Qual o seu chute? " << endl;
        cin >> chute;
        // abs � uma fun��o que retorna o valor absoluto de um n�mero, ou seja, o valor sem sinal. Para us�-la, � necess�rio incluir a biblioteca <cmath>.
        double pontos_pedidos = abs(chute - NUMERO_SECRETRO) / 2.0; // 2.0 para divis�o tipo double
        pontos = pontos - pontos_pedidos;

        cout << "O valor do seu chute e: " << chute << endl;
        bool acertou = chute == NUMERO_SECRETRO;
        bool maior = chute > NUMERO_SECRETRO;

        if (acertou)
        {
            cout << endl
                 << "Parabens! voce acertou o numero secreto!" << endl;
            nao_acertou = false;
            break;
        }
        else if (maior)
        {
            cout << endl
                 << "Seu chute foi maior que o numero secreto!" << endl;
        }
        else
        {
            cout << endl
                 << "Seu chute foi menor que o numero secreto!" << endl;
        }
    }

    cout << endl
         << "Fim de jogo!" << endl;

    if (nao_acertou)
    {
        cout << "Voce perdeu! Tente novamente!" << endl;
    }
    else
    {
        cout << "Voce acertou o numero secreto em " << tentativas << " tentativas" << endl;
        // Para este caso, o mesmo adiciona duas casas decimais ap�s o ponto. Por exemplo: 1000 torna-se 1000.00.
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de " << pontos << " pontos" << endl;
    }

    return 0;
}
