#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

using namespace std;



void fim(){

    cout <<endl<< "---------------------------------------------"<<endl;
   
}

float limitarCasaDecimal (float numero){
    float valorLimitado;
    valorLimitado = (int)(numero * 100 + .5);
    valorLimitado /= 100;
    return valorLimitado;
}

float Ex1(){
    float i,j, soma, subtracao, multiplicacao, divisao;
    cout << "informe o primeiro numero: "; 
    cin >> i;
    cout << "Informe o segundo numero: ";
    cin >> j;
    soma = i + j;
    subtracao = i - j;
    multiplicacao = i * j;
    divisao = i / j;
    cout << "A soma dos numeros "<< i << " + "<< j << " é igual a: "<< soma <<endl;
    cout << "A subtração dos numeros "<< i << " - "<< j << " é igual a: "<< subtracao<<endl;
    cout << "A multiplicação dos numeros "<< i << " X "<< j << " é igual a: "<< multiplicacao<<endl;
    cout << "A divisão dos numeros "<< i << " / "<< j << " é igual a: "<< divisao<<endl;
    fim();
    return 0;
}

float Ex2(){
    
    const int nParcelas = 5;
    string produto;
    float valor, valorParcela;
    cout << "Informe o nome do produto: ";
    getline (cin,produto);
    cout << "informe o valor do produto: ";
    cin >> valor;
    valorParcela = valor / nParcelas;
    cout << "O produto "<< produto << " com valor de R$: " <<valor<< " tera "<< nParcelas << " parcelas no valor de R$: " << valorParcela <<endl;
    fim();
    return 0;
}

float Ex3(){
    float kmTotal, consumo, media;
    cout << "Informe a distancia percorrida ";
    cin >> kmTotal;
    cout << "Informe o consumo em litros ";
    cin >> consumo;
    media = kmTotal / consumo;
    cout << "A media de consumo foi de " << media << " KM/lt"<<endl;
    fim();
    return 0;
}

float Ex4(){
    float n1, n2, n3, n4 , mediaAnual, mediaSemestre1, mediaSemestre2;
    string nome;
    cout << "Informe o nome do aluno: ";
    getline(cin,nome);
    cout << "Informe a nota do 1º bimestre: ";
    cin >> n1;
    cout << "Informe a nota do 2º bimestre: ";
    cin >> n2;
    cout << "Informe a nota do 3º bimestre: ";
    cin >> n3;
    cout << "Informe a nota do 4º bimestre: ";
    cin >> n4;
    mediaSemestre1 = (n1+n2)/2;
    mediaSemestre2 = (n3+n4)/2;
    mediaAnual = (n1+n2+n3+n4)/4;
    cout << "aluno: "<<nome<<endl;
    cout << "metia 1º semestre: " << mediaSemestre1 << endl;
    cout << "media 2º semestre: " << mediaSemestre2 << endl;
    cout << "media anual: " << mediaAnual<< endl;
    fim();
    return 0;
}

float Ex5(){
    float valorProduto, margemLucro, valorVenda;
    cout << "informe o preço de custo do produto: ";
    cin >> valorProduto;
    cout << "Infome a margem de lucro em porcentagem: ";
    cin >> margemLucro;
    valorVenda = valorProduto + (valorProduto  * (margemLucro/100));
    cout << "O valor final de venda do produto sera de R$: " <<valorVenda << endl;
    fim();
    return 0;
}

float Ex6(){
    string nomeVendedor;
    const int comicao = 15;
    float salarioBase, valorVendas, valorComissao, porcentagemAcrescimo, salarioFinal;
    cout << "Informe o nome do vendedor: " << endl;
    getline(cin,nomeVendedor);
    cout << "Informe o salario base: " << endl;
    cin >> salarioBase;
    cout << "Informe o valor das vendas: " << endl;
    cin >> valorVendas;
    valorComissao = valorVendas*(comicao/100);
    salarioFinal = salarioBase + valorComissao;
    porcentagemAcrescimo = 100 * ((salarioFinal-salarioBase)/salarioBase);

    cout << "Nome do vendedor: " << nomeVendedor<< endl;
    cout << "Salario final: " << salarioFinal << endl;
    cout << "Comissão em porcentagem: " << porcentagemAcrescimo << endl;
    fim();
    return 0;

}

float Ex7(){
    float comprimentoPista, consumoMedioCombustivel, quantidadeMinimaCombustivel, comprimetoTotalGP, distanciaEntreReabasteimento;
    int numeroTotalVoltas, numeroReabastecimento;

    cout << "Informe o comprimento da pista em metros: ";
    cin >> comprimentoPista;
    cout << "Informe o numero total de voltas do grande premio: ";
    cin >> numeroTotalVoltas;
    cout << "Informe o numero de reabastecimento desejado: ";
    cin >> numeroReabastecimento;
    cout << "Informe o consumo de combustivel do carro em km/L: ";
    cin >> consumoMedioCombustivel;

    comprimetoTotalGP = (comprimentoPista / 1000) * numeroTotalVoltas;
    distanciaEntreReabasteimento = comprimetoTotalGP / (numeroReabastecimento +1 );
    quantidadeMinimaCombustivel  = distanciaEntreReabasteimento / consumoMedioCombustivel;

    cout << "Para completar o percurso até o primeiro reabastecimento serão necessario no minimo " << quantidadeMinimaCombustivel << " litros de combustivel" << endl;
    fim();    
    return 0;
}

int Ex8(){
    int a, b;

    cout << "Informe um valor inteiro para A: ";
    cin >> a;
    cout << "Informe um valor inteiro para B: ";
    cin >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "O novo valor de A passa a ser: "<< a << endl;
    cout << "O novo valor de B passa a ser: "<< b << endl;

    fim();
    return 0;

}

float Ex9(){
    const int numeroNotas = 3;
    float nota = 0, peso = 0 , mediaPonderada, auxNota, auxPeso;
    for (int i = 1; i <= numeroNotas; i++){
        cout << "Informe a nota "<< i << ": ";
        cin >> auxNota;
        cout << "Informe o peso da nota "<< i <<": ";
        cin >> auxPeso;
        nota = nota + (auxNota * auxPeso);
        peso += auxPeso;
    }
    mediaPonderada = nota / peso;
    cout << "A média ponderada das notas e: "<< mediaPonderada << endl;
    fim();
    return 0;

}

float Ex10(){
    const float percentualAlmento = 25;
    float salarioAtual, salarioReajustado, valorPercentualAlmento;
    valorPercentualAlmento = 1 + (percentualAlmento / 100 );
    cout << "Informe o salario atual do funcionario: ";
    cin >> salarioAtual;
    salarioReajustado = salarioAtual * valorPercentualAlmento;
    cout << "O novo salario do funcionario é: " << salarioReajustado << endl;

    fim();
    return 0;

}

float Ex11(){
    float salarioAtual, salarioReajustado, valorPercentualAlmento, percentualAlmento;
    cout << "Informe o salario atual do funcionario: ";
    cin >> salarioAtual;
    cout << "Informe o percentual de reajuste do salario: ";
    cin >> percentualAlmento;
    valorPercentualAlmento = 1 + (percentualAlmento / 100 );
    salarioReajustado = salarioAtual * valorPercentualAlmento;
    cout << "O novo salario do funcionario é: " << salarioReajustado << endl;

    fim();
    return 0;

}

float Ex12(){
    float temperaturaCelsius, temperaturaFahrenheit;
    cout << "Informe a temperatura em graus Celsius: ";
    cin >> temperaturaCelsius;
    temperaturaFahrenheit = ((9*temperaturaCelsius)+160) / 5;
    cout << "A temperatura em Fahrenheit é: " << temperaturaFahrenheit << endl;
    fim();
    return 0;
}

float Ex13(){
    const int numeroDias = 5;
    float pesoSacoRacaoCheio, pesoSacoRacao,  quantidadeRacaoDiaria;

    cout << "Informe o peso do saco de ração em kg: ";
    cin >> pesoSacoRacaoCheio;
    cout << "Informe a quantidade de ração fornecida diariamente para cada cachorro em gramas: ";
    cin >> quantidadeRacaoDiaria;
    pesoSacoRacao = (pesoSacoRacaoCheio - (numeroDias * ((quantidadeRacaoDiaria/1000)*2)));
    cout << "Após "<< numeroDias<< " dias, restara no saco de ração " << pesoSacoRacao << " KG's" << endl;
    fim();

    return 0;
}

float Ex14(){
    const float imposto = 45, margemLucro = 28;
    float custoPorducao, precoFinal, precoAposImposto, porcentaemImposto, porcentagemLucro;

    cout << "informe o custo de produção do veiculo: ";
    cin >> custoPorducao;
    porcentaemImposto = 1 + (imposto /100);
    porcentagemLucro = 1 + (margemLucro / 100);
    precoAposImposto = custoPorducao * porcentaemImposto;
    precoFinal = precoAposImposto * porcentagemLucro;


    cout << "O preço final do veiculo é R$: " << precoFinal << endl;
    fim();

    return 0;
}

float Ex15(){
    const float imposto = 3;
    float valorSalarioMinimo, valorHoraTrabalhada, quantidadeHorasTrabalhadas, salarioBruto, salarioLiquido, porcentagemImposto;

    cout << "Informe o valor do salario minimo: ";
    cin >> valorSalarioMinimo;
    cout << "Informe a quantidade de horas trabalhades: ";
    cin >> quantidadeHorasTrabalhadas;

    porcentagemImposto = 1 - (imposto / 100); 
    valorHoraTrabalhada = valorSalarioMinimo / 5;
    salarioBruto = valorHoraTrabalhada * quantidadeHorasTrabalhadas;
    salarioLiquido = salarioBruto * porcentagemImposto;

    cout << "O salario liquido sera de R$: " << salarioLiquido << endl;

    fim();

    return 0;

}

float Ex16(){
    const int quantidadeOperacoes = 2;
    const float imposto = 0.38;
    float salario, porcentagemImposto, impostoDescontado = 0, totalLancamentos = 0, auxOperacao, saldoFinal;  

    cout << "Infomre o valor do deposito: ";
    cin >> salario;
    for (int i = 1 ; i <= quantidadeOperacoes; i++){
        cout << "Informe o valor do chegue emitido: ";
        cin >> auxOperacao;
        totalLancamentos += auxOperacao;
    }

    porcentagemImposto = imposto / 100;
    impostoDescontado = totalLancamentos * porcentagemImposto;
    saldoFinal = salario - totalLancamentos - impostoDescontado;
    

    cout << "Após as transações a conta possui um saldo de R$: " << saldoFinal << endl;

    fim();   

    return 0;
}

float Ex17(){
    const float base = 2; 
    float a, b, c, delta, x1, x2;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;

    delta = ((pow(b,base)) - (4 * a * c));
    if(delta < 0){
        cout << "A equação não possui raiz real" << endl;
    }else if(delta == 0){
        x1 = (((b * -1) + sqrt(delta))/(2 * a)); 
        cout << "O valor de x e: " << x1 << endl;
         
    }else{
        x1 = (((b * -1) + sqrt(delta))/(2 * a)); 
        x2 = (((b * -1) - sqrt(delta))/(2 * a));
        cout << "O valor de x1 e: " << x1 << endl;
        cout << "O valor de x2 e: " << x2 << endl;
    }

    fim();
    return 0;   
}

float Ex18(){
    float precoCombustivel, kmInicial, kmFinal, mediaConsumo, faturamentoBruto, consumoCombustivel, lucroLiquido, valorGastoCombustivel;
    cout << "informe o odometro no inicio do dia: ";
    cin >> kmInicial;
    cout << "informe o odometro no fim do dia: ";
    cin >> kmFinal;
    cout << "informe o consumo medio do veiculo: ";
    cin >> mediaConsumo;
    cout << "informe o preço do combustivel: ";
    cin >> precoCombustivel;
    cout << "informe o faturamento bruto do dia: ";
    cin >> faturamentoBruto;

    consumoCombustivel = (kmFinal - kmInicial) / mediaConsumo;
    valorGastoCombustivel = consumoCombustivel * precoCombustivel;
    lucroLiquido = faturamentoBruto - valorGastoCombustivel;

    cout << "Foram gastos " << consumoCombustivel << " litros de combustivel" << endl;
    cout << "O lucro do dia foi de R$: " << lucroLiquido << endl;

    fim();

    return 0;
}

float Ex19(){
    const float valorLataTinta = 50.00, volumeLataTinta = 5.00, rendimentoLitroTinta = 3;
    float areaBase, areaLateral, alturaCilindro, raioCilindro, areaTotalPinturaMetro, quantidadeNescessariTinta, valorTotalPintura;
    int quantiadeCilindro, quatidadeLatasNecessarias;

    cout << "Informe a quantiade de cilindros a ser pintado: ";
    cin >> quantiadeCilindro;
    cout << "informe a altura do cilindro em centimetros: ";
    cin >> alturaCilindro;
    cout << "infome o raio do cilindro em centimetros: ";
    cin >> raioCilindro;

    areaBase = 2 *(M_PI * (pow(raioCilindro, 2))); // calcula area da base superior e inferior em cm²
    areaLateral = 2 * M_PI * raioCilindro * alturaCilindro; // calcula area lateral em cm²
    areaTotalPinturaMetro = quantiadeCilindro * ((areaBase + areaLateral) / 10000); // calcula area total em m²

    quantidadeNescessariTinta = areaTotalPinturaMetro / rendimentoLitroTinta; //calcula quantidade de litros necessarios para a pintura
    quatidadeLatasNecessarias = ceil(quantidadeNescessariTinta / volumeLataTinta); // calcula quantas latas de tintas são necessarias para a pintura
    valorTotalPintura = quatidadeLatasNecessarias * valorLataTinta; // calcula o valor total da pintura

    cout << "Será necessario " << quatidadeLatasNecessarias << " latas de tinta com um valor total de R$: " << valorTotalPintura << endl;

    fim();

    return 0;

}

float Ex20(){

    float distancia, x1, x2, y1, y2;

    cout << "Informe o primeiro ponto cartesiano: ";
    cin >> x1;
    cin >> y1;
    cout << "Informe o primeiro ponto cartesiano: ";
    cin >> x2;
    cin >> y2;

    distancia = sqrt (pow((x2 - x1),2) + pow((y2 - y1),2));
    
    cout << "A distancia entre os pontos é " << distancia << endl;
    fim();

    return 0;
}

float Ex21(){
    cout << "Tirar duvida do que realmete se pede no exercicio. " << endl;
    fim();
    return 0;

}

float Ex22(){
    const float valorFixoKW = 0.1, desconto = 15;
    float valorKW, salarioMinimo, consumoKW, valorPago, valorPagoDesconto;
    cout << "Informe o valor do sario miniomo: ";
    cin >> salarioMinimo;
    cout << "Informe o consutmo em quilowatts: ";
    cin >> consumoKW;
    valorKW = salarioMinimo * (valorFixoKW / 100);
    valorPago = valorKW * consumoKW;
    valorPagoDesconto = valorPago - (valorPago * (desconto / 100));
    valorPago = limitarCasaDecimal(valorPago);
    valorKW = limitarCasaDecimal(valorKW);
    valorPagoDesconto = limitarCasaDecimal(valorPagoDesconto);
    cout << "O valor do KW é de R$: "  << valorKW  << endl ;
    cout << "O valor a ser pago é de R$: " << valorPago << endl;   
    cout << "O valor a ser pago com "<<desconto<< " % de desconto é de R$: " << valorPagoDesconto << endl;

    fim();

    return 0;
}

float Ex23(){
    float alturaDegrau, alturaDesejada, qtdDegraus = 0;

    cout << "Infome o tamanho do degrau em metros: ";
    cin >> alturaDegrau;
    cout << "Informe a altura que deseja alcançar: ";
    cin >> alturaDesejada;

    qtdDegraus = ceill(alturaDesejada / alturaDegrau);

    cout << "A quantidade de degraus a ser subida é de " << qtdDegraus << endl;

    fim();

    return 0;


}

float Ex24(){
    float pes, polegadas, jardas, milhas;

    cout << "Informe a medida em pés: ";
    cin >> pes;
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    cout << "Polegadas: " << polegadas << endl;
    cout << "jardas: " << jardas << endl;
    cout << "Milhas: " << milhas << endl;

    return 0;
}

void Ex25(){
    float temperaturaFahrenheit, tempearturaCelsius;

    cout << "Informe a temperatura em fahrenheit: ";
    cin >> temperaturaFahrenheit;
    
    tempearturaCelsius = ((temperaturaFahrenheit - 32) * 5) / 9 ;

    tempearturaCelsius = limitarCasaDecimal(tempearturaCelsius);


    cout << "A tempetura em celcius é: " << tempearturaCelsius << endl;
    fim();


}

int main(){

    int nExercicio = 0, repetirExercio, contador = 0;
    bool repetExercicio = false;
    bool repet = true;
    bool verificador = false;
    bool validadorExercicio = true;

    SetConsoleOutputCP(CP_UTF8);
    
    do{
        if (repetExercicio == false){
            cout << "\ninforme o numero do exercicio: \n0 para sair ";
            cin >> nExercicio;
        }

        cin.ignore();

        switch (nExercicio){
            case 0:
               repet = false;
               cout << "o software sera encerrado\n\n";
               validadorExercicio = false;
               break;
           case 1:
               Ex1();
               break;
           
           case 2:
               Ex2();
               break;
    
           case 3:
               Ex3();
               break;
    
           case 4:
               Ex4();
               break;
           
           case 5:
               Ex5();
               break;
    
           case 6:
               Ex6();
               break;
           
           case 7:
               Ex7();
               break;      
           
           case 8:
               Ex8();
               break;
    
           case 9:
               Ex9();
               break;
    
           case 10:
               Ex10();
               break;
               
           case 11:
               Ex11();
               break;
               
           case 12:
               Ex12();
               break;
           
           case 13:
               Ex13();
               break;
    
           case 14:
               Ex14();
               break;
    
           case 15:
               Ex15();
               break;
    
           case 16:
               Ex16();
               break;
    
           case 17:
               Ex17();
               break;
    
           case 18:
               Ex18();
               break;
    
           case 19:
               Ex19();
               break;
    
           case 20:
               Ex20();
               break;
           
           case 21:
               Ex21();
               break;
    
           case 22:
               Ex22();
               break;
    
           case 23:
               Ex23();
               break;
    
           case 24:
               Ex24();
               break;
    
           case 25:
               Ex25();
               break;
    
           default:
               cout << "Informe um numero válido" << endl;
               validadorExercicio = false;
           break;
        }

        if (validadorExercicio == true){
          
            do{
            
                cout << "Deseja repetir o exercicio? "<< endl << "1 para sim e 2 para não: ";
                cin >> repetirExercio;
    
                if(repetirExercio == 1){
                    verificador = true;
                    repetExercicio = true;
                }else if(repetirExercio == 2){
                    verificador = true;
                    repetExercicio = false;
                }else{
                    contador += 1;
                    
                    if (contador == 3){
                        cout << "Você retornara ao menu inicial";
                        verificador = true;
                    }else{
                        cout << "Informe um valor valido. Você tem mais " << 3 - contador << " tentantivas antes que retorne ao menu inicial" << endl;
                    }
                }
    
            } while (verificador == false);
            contador = 0;
            verificador = false;
        }
        
        validadorExercicio = true;
       
        
    }while(repet == true); 
    return 0;
}