#include <iostream>
#include <vector>
// adicao de vetor
struct Reuniao {
    int dia;
    int hora;
    int duracao;
};
std::vector<Reuniao> reunioes;
// chamada
void menu()
{
        std::cout<<"[1]--> Adicionar Reuniao"<<std::endl;
        std::cout<<"[2]--> Visualizar Reuniao"<<std::endl;
        std::cout<<"[3]--> Apagar Reunioes"<<std::endl;
        std::cout<<"[4]--> Sair do Programa"<< std::endl;
}
int selecao()
{
    std::cout<<"digite um numero para a operacao: ";
    int selecao{};
    std::cin>>selecao;
    return selecao;
}
void adicionarReuniao()
{
    Reuniao novaReuniao;
    std::cout<<"DIA: ";
    std::cin >> novaReuniao.dia;
    std::cout<<"HORARIO: ";
    std::cin >> novaReuniao.hora;
    std::cout<<"DURACAO (EM MINUTOS): ";
    std::cin >> novaReuniao.duracao;
    reunioes.push_back(novaReuniao); 
}
void mostrarDados()
{
        if (reunioes.empty()) {
        std::cout << "Nenhuma reuniao cadastrada." << std::endl;
    }
    for (const auto& reuniao : reunioes) {
        std::cout << "Dia: " << reuniao.dia << std::endl;
        std::cout << "Horario: " << reuniao.hora << std::endl;
        std::cout << "Duracao: " << reuniao.duracao << std::endl;
        std::cout << "-------------------------------------------------"<< std::endl;
    }
}

int main() {
    int testeSelecao = 0;

    while (testeSelecao != 4) {
        menu();
        testeSelecao = selecao();

        switch (testeSelecao) {
            case 1:
                std::cout<<"\n";
                adicionarReuniao();
                std::cout<<"\n";
                break;

            case 2:
                std::cout<<"\n";
                mostrarDados();
                std::cout<<"\n";
                break;

            case 3:
                std::cout<<"\n";
                reunioes.clear();
                std::cout<<"\n";
                break;

            case 4:
                std::cout<<"\n";
                std::cout << "Saindo do programa." << std::endl;
                std::cout<<"\n";
                break;

            default:
                std::cout<<"\n";
                std::cout << "Opcao invalida. Tente novamente." << std::endl;
                std::cout<<"\n";
                break;
        }
    }
    return 0;
}