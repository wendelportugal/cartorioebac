#include <stdio.h> //biblioteca de comunicação de usuario
#include <stdlib.h> //biblioteca de alocação de espaço e memória
#include <locale.h> //biblioteca de alocação de texto por regiao
#include <string.h> // biliote responsavel por cuidar das string
                              
							  int registro() //Função responsálvel por cadastar os usuários no sistema
                            {
                             
                             //Início criação de variável/string(conjunto de variável)
							   char arquivo[40]; 
                               char cpf[40];
                               char nome[40];
                               char sobrenome[40];
                               char cargo[40];
                             //Final da criação de variável/string(conjunto de variável)
							   
                               printf("Digite o cpf a ser cadastado: "); //Coletando informação do usuário
                               scanf("%s", cpf); //%s Refere-se a string
                               strcpy(arquivo, cpf); //Responslvel por criar os arquivos das string
							   
							   FILE *file; // cria o arquivo
							   file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
							   fprintf(file, cpf); //salvo o valor da variavel 
							   fclose(file); //Fecha o arquivo
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file, ","); 
							   fclose(file); //Fecha o arquivo
							
							   printf("digite o nome a ser cadastrado: "); //Coletando informação do usuário
							   scanf("%s", nome); //%s Refere-se a string
							   file = fopen(arquivo, "a"); //Atualiza o arquivo 
							   fprintf(file, nome); 
							   fclose(file); //Fecha o arquivo 
							   
							   file = fopen(arquivo,"a"); //Atualiza o arquivo
							   fprintf(file,","); 
							   fclose(file); 
							   
							   printf("digite o sobrenome a ser cadastrado: "); //Coletando informação do usuário
							   scanf("%s", sobrenome); //%s Refere-se a string
							   
							   file = fopen(arquivo,"a"); //Atualiza o arquivo 
							   fprintf(file, sobrenome); 
							   fclose(file); //Fecha o arquivo
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file,","); 
							   fclose(file); //Fecha o arquivo
							   
							   printf("digite o cargo a ser cadastrado: "); //Coletando informação do usuário
							   scanf("%s", cargo); //%s, Refere-se a string
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file, cargo); 
							   fclose(file); //Fecha o arquivo
							   
							   system("pause");
							
							                                 
							}
                         
                             int consultar() //Função responsável por consultar os usuários do sistema
                            {
	                          setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem  
	                        
							 //Início da criação de variável/string(conjunto de variável)
							  char cpf[40];
	                          char conteudo[200];
	                         //Final da criação de variável/string(conjunto de variável)
	                         
							  printf("digite o cpf a ser consultado: ");
	                          scanf("%s",cpf); //%s Refere-se a string
	                          FILE *file; 
	                          file = fopen(cpf,"r"); 
	                          
	                          if(file == NULL)
							  {
	                            printf("Não foi possivel abrir o arquivo, não localizado!\n");	
							  }
							  while(fgets(conteudo, 200, file) != NULL) 
							  {
								printf("\nEssas são as informaçoes do usuário: "); 
								printf("%s",conteudo); 
								printf("\n\n");
								  
							  }
								system ("pause");
							  
                            } 
                            
                            int deletar() //Função responsável por deletar os usuários do sistema
                            {
							
							//Início da criação de variável/string(conjunto de variável) 
							char cpf[40];
							//Fim da criação de variável/string(conjunto de variável)
					    	
							printf("Digite o CPF do usuário a ser deletado: "); // Coletando informação do usuário
							scanf("%s",cpf); //%s Refere-se a string
							
							remove(cpf); //Apaga o arquivo
							
							FILE *file; 
							file = fopen(cpf,"r");
							
							if(file == NULL); 
							{
								printf("Usuário não se encontra no sistema!\n\n");
								system("pause");
							}
						
							
							}
int main()
{

                            int opcao=0;//Definindo variáveis
                            int laco=1; 
                            
                            for(laco=1;laco=1;)
							{
							 
							 system("cls"); //Responsavel por limpar a tela
							
							
							setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 
                            
							printf("### Cartorio da EBAC ###\n\n"); //início do menu
                            
							printf("escolha opção desejada no menu:\n\n");
                            printf("\t1 - registrar nomes\n");
                            printf("\t2 - consultar nomes\n");
                            printf("\t3 - deletar nomes\n\n"); 
                            printf("\t4 - sair do sistema\n\n ");
							printf("opcao:"); //fim do menu
                             
                                scanf("%d", &opcao); //armazenando a escolha do usuario
                             
                                system("cls"); 
                             
							 switch(opcao)
							 {
							 
							 case 1:
							    registro(); //Chamada de funções
							    break;
							    
							    case 2:
						        consultar(); //Chamada de funções
								break; 
								
								case 3: 
								 deletar(); //Chamada de funções
							     break; 
							    
							    case 4:
							    printf("obrigado por utilizar o sistema! \n");
							    return 0; 
							    break;
							    
								default:
							    printf("Essa opcao não esta disponivel\n"); //fim da seleção 
							    system("pause");
							    break;
						}
						}
}                            

            
