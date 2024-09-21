#include <iostream>
#include <cstdlib> 
using namespace std;

void menu(){
    int escolha;
    cout << "\nQual operação deseja realizar: \n1. [Depositar]\n2. [Sacar]\nOpção: ";
    cin >> escolha;
}

void menu2(){
    int escolha;
    cout << "\nQual operação deseja realizar: \n1. [Depositar novamente]\n2. [Sacar]\n3. [Sair]\nOpção: ";
    cin >> escolha;
}

int main(){
    string nome, cpf, numTelefone;
    string email, senha;
    
    cout << "                       BANCO BILGEWATER";
    cout << " \n";
    
    cout << "CADASTRO\n";
    cout << "Digite seu nome completo: ";
    getline(cin, nome);
    
    cout << "Digite seu CPF: ";
    cin >> cpf;
    
    cout << "Digite seu número de telefone: ";
    cin >> numTelefone;

    cout << "CADASTRO DO LOGIN\n";
    cout << "Digite seu email: ";
    cin >> email;
    
    cout << "Crie uma senha: ";
    cin >> senha;
    
    cout << "\nCADASTRO CONCLUÍDO!\n";
    
    cout << "Suas informações pessoais: \n";
    cout << "Nome: " << nome << "\n" << "CPF: " << cpf << "\n";
    cout << "N° de Telefone: " << numTelefone << "\n";
    
    
    cout << "Suas informações de login: \n";
    cout << "Email: " << email << "\n";
    cout << "Senha: " << senha; 
    
    cout << "\nNúmero do seu cartão: ";
    for(int i = 1; i <= 14; i++){
    cout << rand() % 10 + 1;
    }
    
    cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n"; 
    
    int escolha;
    int deposito, debito;
    int conta = 0;
    
    menu();
  
    do{
        cout << "\nQuanto deseja depositar: ";
        cin >> deposito;
        
        conta = conta + deposito;
        cout << "Seu saldo: R$" << conta << endl;
        menu2();
        
    } while(escolha == 1);
    
    
    do{
        cout << "Seu saldo: R$" << conta << endl;
        cout << "\nQuanto deseja sacar: ";
        cin >> debito;
        conta = conta - debito;
        cout << "Seu saldo: R$" << conta << endl;
    } while(escolha == 2);
    
    do {
        menu();
    } while (escolha == 3);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}