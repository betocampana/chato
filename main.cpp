#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main () {
	
	int opcao;

	cout << "+++++++++++++++---------------+++++++++++++++\n\n";
	cout << "Bem vindo a este jogo.\n";
	cout << "O nome deste jogo e' (Chato). Deseja continuar a jogar?\n\n";
	cout << "Pressione 1 para continuar ou 2 para continuar mesmo assim.\n";
	cout << "Deseja sair? Mas voce parece tao legal... continue, ou pressione 7 para sair.\n\n";
	opcao = 0;
	cout << " [ 1 ] --- [ 2 ] --- [ 3 ] --- [ 4 ] --- [ 5 ] --- [ 6 ] --- [ 7 ] --- [ 8 ] --- [ 9 ] --- [ 0 ]\n\n";
	cin >> opcao;
	
	
	
	if (opcao == 1)
		cout << "\nOk, eu sabia que voce seria uma pessoa legal. Bora pro jogo!\n";
	
	else if (opcao == 2)
		cout << "\nOk, mas pra que escolher 2?  Enfim, Bora pro jogo!\n";
	
	else if (opcao == 7)
		cout << "Opcao incorreta. Digite 1 ou 2\n";
	
	else
		cout << "Parabens por nao conseguir escolher entre 1, 2 ou 7.\nGosto de gente assim, de inteligencia limitada. Bora pro jogo!\n";
	
	return 0;
}
