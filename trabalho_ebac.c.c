#include <stdio.h> //biblioteca de comunica��o de usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o e mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regiao
#include <string.h> // biliote responsavel por cuidar das string
                              
							  int registro() //Fun��o respons�lvel por cadastar os usu�rios no sistema
                            {
                             
                             //In�cio cria��o de vari�vel/string(conjunto de vari�vel)
							   char arquivo[40]; 
                               char cpf[40];
                               char nome[40];
                               char sobrenome[40];
                               char cargo[40];
                             //Final da cria��o de vari�vel/string(conjunto de vari�vel)
							   
                               printf("Digite o cpf a ser cadastado: "); //Coletando informa��o do usu�rio
                               scanf("%s", cpf); //%s Refere-se a string
                               strcpy(arquivo, cpf); //Responslvel por criar os arquivos das string
							   
							   FILE *file; // cria o arquivo
							   file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
							   fprintf(file, cpf); //salvo o valor da variavel 
							   fclose(file); //Fecha o arquivo
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file, ","); 
							   fclose(file); //Fecha o arquivo
							
							   printf("digite o nome a ser cadastrado: "); //Coletando informa��o do usu�rio
							   scanf("%s", nome); //%s Refere-se a string
							   file = fopen(arquivo, "a"); //Atualiza o arquivo 
							   fprintf(file, nome); 
							   fclose(file); //Fecha o arquivo 
							   
							   file = fopen(arquivo,"a"); //Atualiza o arquivo
							   fprintf(file,","); 
							   fclose(file); 
							   
							   printf("digite o sobrenome a ser cadastrado: "); //Coletando informa��o do usu�rio
							   scanf("%s", sobrenome); //%s Refere-se a string
							   
							   file = fopen(arquivo,"a"); //Atualiza o arquivo 
							   fprintf(file, sobrenome); 
							   fclose(file); //Fecha o arquivo
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file,","); 
							   fclose(file); //Fecha o arquivo
							   
							   printf("digite o cargo a ser cadastrado: "); //Coletando informa��o do usu�rio
							   scanf("%s", cargo); //%s, Refere-se a string
							   
							   file = fopen(arquivo, "a"); //Atualiza o arquivo
							   fprintf(file, cargo); 
							   fclose(file); //Fecha o arquivo
							   
							   system("pause");
							
							                                 
							}
                         
                             int consultar() //Fun��o respons�vel por consultar os usu�rios do sistema
                            {
	                          setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem  
	                        
							 //In�cio da cria��o de vari�vel/string(conjunto de vari�vel)
							  char cpf[40];
	                          char conteudo[200];
	                         //Final da cria��o de vari�vel/string(conjunto de vari�vel)
	                         
							  printf("digite o cpf a ser consultado: ");
	                          scanf("%s",cpf); //%s Refere-se a string
	                          FILE *file; 
	                          file = fopen(cpf,"r"); 
	                          
	                          if(file == NULL)
							  {
	                            printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");	
							  }
							  while(fgets(conteudo, 200, file) != NULL) 
							  {
								printf("\nEssas s�o as informa�oes do usu�rio: "); 
								printf("%s",conteudo); 
								printf("\n\n");
								  
							  }
								system ("pause");
							  
                            } 
                            
                            int deletar() //Fun��o respons�vel por deletar os usu�rios do sistema
                            {
							
							//In�cio da cria��o de vari�vel/string(conjunto de vari�vel) 
							char cpf[40];
							//Fim da cria��o de vari�vel/string(conjunto de vari�vel)
					    	
							printf("Digite o CPF do usu�rio a ser deletado: "); // Coletando informa��o do usu�rio
							scanf("%s",cpf); //%s Refere-se a string
							
							remove(cpf); //Apaga o arquivo
							
							FILE *file; 
							file = fopen(cpf,"r");
							
							if(file == NULL); 
							{
								printf("Usu�rio n�o se encontra no sistema!\n\n");
								system("pause");
							}
						
							
							}
int main()
{

                            int opcao=0;//Definindo vari�veis
                            int laco=1; 
                            
                            for(laco=1;laco=1;)
							{
							 
							 system("cls"); //Responsavel por limpar a tela
							
							
							setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 
                            
							printf("### Cartorio da EBAC ###\n\n"); //in�cio do menu
                            
							printf("escolha op��o desejada no menu:\n\n");
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
							    registro(); //Chamada de fun��es
							    break;
							    
							    case 2:
						        consultar(); //Chamada de fun��es
								break; 
								
								case 3: 
								 deletar(); //Chamada de fun��es
							     break; 
							    
							    case 4:
							    printf("obrigado por utilizar o sistema! \n");
							    return 0; 
							    break;
							    
								default:
							    printf("Essa opcao n�o esta disponivel\n"); //fim da sele��o 
							    system("pause");
							    break;
						}
						}
}                            

            
