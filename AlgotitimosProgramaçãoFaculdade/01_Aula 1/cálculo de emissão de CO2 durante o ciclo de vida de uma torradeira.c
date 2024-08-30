#include <stdio.h>
#include <unistd.h>

int main()
{
	// declarar variável aço
	float aco_por_torradeira = 1.0f;
	// declarar variável vapor
	float vapor_por_torradeira = 0.5f;
	// declarar unidades de torradeira, repare na utilização
        // do tipo inteiro.
	int torradeira = 1;
	// declarar pães por torradeira (vida útil)
	int pao_por_torradeira = 1000;
	// declarar variáveis das emissões
	float co2_aco = 1.0f, co2_vapor = 4.0f,
		co2_torradeira = 2.0f,
		co2_pao = 1/1000.0f, // cuidado com divisões na linguagem c, 
                             // existe a divisão inteira, não é esse
                             // o caso, mas sempre esteja a atento
                             // a isso. 1/1000.0f informa que a unidade
                             // 1 está sendo dividida pelo número
                             // em ponto flutuante 1000.0f, o resultado
                             // será um número flutuante.
		co2_descarte = 0.5f;
	
	float co2_total = 0.0f;
	
        // equação do artigo Methods for Life Cycle Inventory of a Product de
        // Sangwon Suh e Gjalt Huppes (exemplo de aplicação em engenharia ambiental)
	co2_total = co2_aco * aco_por_torradeira + 
		co2_vapor * vapor_por_torradeira + 
		co2_torradeira * torradeira +
		co2_pao * pao_por_torradeira +
		co2_descarte * torradeira;
		
	printf("emissão total = %fkgCO2\n", co2_total);
	
	return 0;

 sleep(5);
}
