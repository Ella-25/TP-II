#include <iostream>
#include <cmath>

using namespace std;

// Definição de constantes
const int NUM_PACIENTES = 11; // 10 pacientes históricos + 1 novo paciente
const int MIN_INDICADORES = 3;
const int MAX_INDICADORES = 7;

// Função para calcular a distância euclidiana entre dois pacientes
float calcularDistancia(float paciente1[], float paciente2[], int numIndicadores) {
    float soma = 0.0;
    for (int i = 0; i < numIndicadores; i++) {
        soma += pow(paciente1[i] - paciente2[i], 2);
    }
    return sqrt(soma);
}

// Função para encontrar o paciente histórico mais próximo do novo paciente
int encontrarPacienteMaisProximo(float matriz[][MAX_INDICADORES + 1], int numIndicadores) {
    int indiceMaisProximo = 0;
    float menorDistancia = calcularDistancia(matriz[NUM_PACIENTES - 1], matriz[0], numIndicadores);

    for (int i = 1; i < NUM_PACIENTES - 1; i++) {
        float distancia = calcularDistancia(matriz[NUM_PACIENTES - 1], matriz[i], numIndicadores);
        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            indiceMaisProximo = i;
        }
    }
    return indiceMaisProximo;
}

// Função para exibir a matriz de pacientes
void exibirMatriz(float matriz[][MAX_INDICADORES + 1], int numIndicadores) {
    cout << "\nTabela de Pacientes:\n";
    for (int i = 0; i < NUM_PACIENTES; i++) {
        for (int j = 0; j <= numIndicadores; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int numIndicadores;

    // Solicitar número válido de indicadores
    do {
        cout << "Informe o número de indicadores clínicos (entre " << MIN_INDICADORES << " e " << MAX_INDICADORES << "): ";
        cin >> numIndicadores;
    } while (numIndicadores < MIN_INDICADORES || numIndicadores > MAX_INDICADORES);

    float matriz[NUM_PACIENTES][MAX_INDICADORES + 1];

    // Preenchimento dos dados dos pacientes históricos
    cout << "\nInforme os dados dos 10 pacientes históricos:\n";
    for (int i = 0; i < NUM_PACIENTES - 1; i++) {
        cout << "Paciente " << i + 1 << ":\n";
        for (int j = 0; j < numIndicadores; j++) {
            cout << "Indicador " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
        cout << "Classificação (1.0 = Saudável, -1.0 = Doente): ";
        cin >> matriz[i][numIndicadores];
    }

    // Preenchimento do novo paciente
    cout << "\nInforme os dados do novo paciente:\n";
    for (int j = 0; j < numIndicadores; j++) {
        cout << "Indicador " << j + 1 << ": ";
        cin >> matriz[NUM_PACIENTES - 1][j];
    }

    // Encontrar o paciente mais próximo
    int indiceMaisProximo = encontrarPacienteMaisProximo(matriz, numIndicadores);
    matriz[NUM_PACIENTES - 1][numIndicadores] = matriz[indiceMaisProximo][numIndicadores];

    // Exibir a matriz final com o paciente classificado
    exibirMatriz(matriz, numIndicadores);

    // Exibir o resultado da classificação
    cout << "\nO novo paciente foi classificado como: " 
         << (matriz[NUM_PACIENTES - 1][numIndicadores] == 1.0 ? "Saudável" : "Doente") << endl;
    
    return 0;
}
