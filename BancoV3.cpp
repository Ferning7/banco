#include <iostream>
#include <stdlib.h> 
using namespace std;

void menu(){
    int esc;
    cout << "                 [MENU]" << endl;
    cout << "    BEM VINDO(A) AO BANCO BILGEWATER!" << endl;
    cout << "              1. CADASTRO\n";
    cout << "\nescolha: ";
}

void opçoes(){
    int escolha;
    cout << "\nQual operação deseja realizar: \n1. [Depositar]\n2. [Sacar]\nOpção: ";
    
}

void opçoes2(){
    int escolha;
    cout << "\nQual operação deseja realizar: \n1. [Depositar novamente]\n2. [Sacar]\n3. [Gerar N° do Cartão]\n4. [Sair]\nOpção: ";
    
}

int main(){
    int esc;
    string nome, cpf, numTelefone;
    string email, senha;
    
    menu();
    cin >> esc;
    system("clear");
    
    if(esc == 1){
    
        cout << "                       BANCO BILGEWATER";
        cout << " \n";
        
        cout << "CADASTRO DE INFORMAÇÕES PESSOAIS\n";
        cout << "Digite seu nome completo: ";
        getline (cin, nome);
        
        cout << "Digite seu CPF: ";
        cin >> cpf;
        
        cout << "Digite seu N° de telefone: ";
        cin >> numTelefone;
    
        system("clear");
    
        cout << "\nCADASTRO DO LOGIN\n";
        cout << "Digite seu email: ";
        cin >> email;
        
        cout << "Crie uma senha: ";
        cin >> senha;
        
        
        cout << "\nCADASTRO CONCLUÍDO!\n";
        
        cout << "Suas informações pessoais: \n";
        cout << "Nome: " << nome << "\n" << "CPF: " << cpf << "\n";
        cout << "N° de Telefone: " << numTelefone << "\n";
        
        
        cout << "\nSuas informações de login: \n";
        cout << "Email: " << email << "\n";
        cout << "Senha: " << senha << endl; 
}
    
    system("clear"); 

    
    int escolha;
    int deposito, debito;
    int conta = 0;
    
    opçoes2();
    cin >> escolha;
    
    if(escolha == 1){
        cout << "\nQuanto deseja depositar: ";
        cin >> deposito;
        
        conta = conta + deposito;
        cout << "Seu saldo: R$" << conta << endl;
        opçoes2();
        cin >> escolha;
    }
    
    system("clear");
    
    if(escolha == 2){
        cout << "Seu saldo: R$" << conta << endl;
        cout << "\nQuanto deseja sacar: ";
        cin >> debito;
        
        conta = conta - debito;
        cout << "Seu saldo: R$" << conta << endl;
    };
    
    system("clear");
    
    if(escolha == 3){
        cout << "\nNúmero do seu cartão: ";
        
        for(int i = 1; i <= 14; i++){
        cout << rand() % 10 + 1;
        }
        
   };
    
    system("clear");
    
    if(escolha == 4){
        opçoes();
        cin >> escolha;
    };
    
    
  
    return 0;
}