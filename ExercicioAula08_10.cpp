#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função para imprimir o estado atual dos blocos de memória
void printMemory(const vector<int>& blocks) {
    cout << "Blocos de memória: ";
    for (int block : blocks) {
        cout << block << " ";
    }
    cout << endl;
}

// First Fit: Encontra o primeiro bloco de memória que pode acomodar o processo
void first_fit(vector<int>& blocks, int process_size) {
    for (int i = 0; i < blocks.size(); ++i) {
        if (blocks[i] >= process_size) {
            cout << "Processo de tamanho " << process_size << " alocado no bloco " << i << " de tamanho " << blocks[i] << endl;
            blocks[i] -= process_size; // Reduz o tamanho do bloco
            return;
        }
    }
    cout << "Não foi possível alocar o processo de tamanho " << process_size << " (First Fit)." << endl;
}

// Best Fit: Encontra o menor bloco de memória que pode acomodar o processo
void best_fit(vector<int>& blocks, int process_size) {
    int best_idx = -1;
    for (int i = 0; i < blocks.size(); ++i) {
        if (blocks[i] >= process_size) {
            if (best_idx == -1 || blocks[i] < blocks[best_idx]) {
                best_idx = i;
            }
        }
    }
    if (best_idx != -1) {
        cout << "Processo de tamanho " << process_size << " alocado no bloco " << best_idx << " de tamanho " << blocks[best_idx] << endl;
        blocks[best_idx] -= process_size; // Reduz o tamanho do bloco
    } else {
        cout << "Não foi possível alocar o processo de tamanho " << process_size << " (Best Fit)." << endl;
    }
}

// Worst Fit: Encontra o maior bloco de memória que pode acomodar o processo
void worst_fit(vector<int>& blocks, int process_size) {
    int worst_idx = -1;
    for (int i = 0; i < blocks.size(); ++i) {
        if (blocks[i] >= process_size) {
            if (worst_idx == -1 || blocks[i] > blocks[worst_idx]) {
                worst_idx = i;
            }
        }
    }
    if (worst_idx != -1) {
        cout << "Processo de tamanho " << process_size << " alocado no bloco " << worst_idx << " de tamanho " << blocks[worst_idx] << endl;
        blocks[worst_idx] -= process_size; // Reduz o tamanho do bloco
    } else {
        cout << "Não foi possível alocar o processo de tamanho " << process_size << " (Worst Fit)." << endl;
    }
}

int main() {
    // Exemplo de blocos de memória estáticos
    vector<int> memory_blocks = {100, 500, 200, 300, 600};
    vector<int> process_sizes = {212, 417, 112, 426};

    cout << "Memória inicial:" << endl;
    printMemory(memory_blocks);

    cout << "\n### First Fit ###" << endl;
    vector<int> first_fit_blocks = memory_blocks;  // Cópia para manter a memória original
    for (int process : process_sizes) {
        first_fit(first_fit_blocks, process);
        printMemory(first_fit_blocks);
    }

    cout << "\n### Best Fit ###" << endl;
    vector<int> best_fit_blocks = memory_blocks;  // Cópia para manter a memória original
    for (int process : process_sizes) {
        best_fit(best_fit_blocks, process);
        printMemory(best_fit_blocks);
    }

    cout << "\n### Worst Fit ###" << endl;
    vector<int> worst_fit_blocks = memory_blocks;  // Cópia para manter a memória original
    for (int process : process_sizes) {
        worst_fit(worst_fit_blocks, process);
        printMemory(worst_fit_blocks);
    }

    return 0;
}

