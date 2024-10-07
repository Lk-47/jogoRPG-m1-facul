#include <iostream>
#include <limits>

using namespace std;

int main()
{

    cout <<"Ola, jogador! Seja muito bem vindo a esta historia interativa chamada:\n THE GREEN SAVIOUR." << endl;
    system("pause");


    //Contextualizacao do universo do protagonista e escolher se vai ou fica (minecraft da vida)
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"O reino de Zou corre perigo de desaparecer, anos atras ele entrou em uma crise economica e dela nao consegue fugir." << endl;
    cout <<"Apesar da resiliencia do povo e governantes, parece que essa crise sera a pior, o tempo urge acoes." << endl;
    cout <<"Como ultima esperanca, o rei criou uma campanha de recrutamento de jovens para compor uma equipe." << endl;
    cout <<"Esquadrao Profissional de Captura e Identificacao de Joias, os que trariam o reino de Zou de volta." << endl;
    cout <<"A unica salvacao do reino seria uma esmeralda, joia tao valiosa que era capaz de enriquecer reinos por anos.";
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

    cout <<"\nVoce esta caminhando pelo centro do reino e se interessa pela campanha, a recompensa promete muito $$$." <<endl;
    cout <<"Gostaria de se candidatar?" << endl;
    cout <<"1 - Sim" << endl;
    cout <<"2 - Nao" << endl;

    int escolha1;
    cin >> escolha1;
    if(escolha1 == 1) {
        cout <<"Voce decide se candidatar e consegue uma vaga, meus parabens, mas nao ha tempo para comemorar." << endl;
        cout <<"Apos poucos dias e um treinamento previo, o esquadrao esta pronto para salvar o reino, todos confiantes." << endl;
    } else {
        cout <<"Voce decide ficar no reino, afinal quem iria arriscar sua vida pelo bem de desconhecidos, nao e mesmo? \nFIM" << endl;
        return 0;
    }

    system("pause");
    system("cls");

    //Timeskip dos acontescimentos
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Semanas depois de sua saida... Voce nao consegue lembrar o que te atacou... Como se houvesse um borrao nos emboscadores." << endl;
    cout <<"Como ultimo membro sobrevivente do EPCIJ, voce nao tem nada e nem sabe onde esta, espero que goste de sua companhia." << endl;
    cout <<"Voce anda... e anda... rumo ao desconhecido apos o ataque e emboscada fatal que dizimou sua equipe." << endl;
    cout <<"'Essa busca pela esmeralda devia ser um trabalho facil... como isso foi acontecer?' Voce pensa." <<endl;
    cout <<"Mas nao ha tempo para isso, voce precisa se recompor e continuar, deve juntar recursos e acabar o que comecou." <<endl;
    cout <<"Aproveite que esta de dia e trabalhe, voce sabe o que a noite tem reservada para voce...";
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

    //Segunda escolha (Pensada para o futuro)
    cout <<"\n Apos observar seus redores, voce percebe que esta em uma floresta. Algumas opcoes vem a sua cabeca:" << endl;

    cout <<" Escolha o que ira fazer: " << endl;
    cout <<" 1 - Coletar madeira" << endl;
    cout <<" 2 - Explorar o local" << endl;
    cout <<" 3 - Arranjar comida" << endl;
    cout <<" 4 - Fazer ferramentas" << endl;

    bool vMadeira, vCaverninha;
    vMadeira = vCaverninha = false;
    int escolha2;

    cin >> escolha2;

    switch( escolha2 ) {
    case 0:
        cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
        return 0;
        break;
    case 1:
        cout <<"Voce utiliza das tecnicas ensinadas no seu treinamento e consegue blocos de madeira socando arvores." << endl;
        cout <<"Algumas macas caem das arvores com os golpes e o chacoalhar.";
        vMadeira = true;
        break;
    case 2:
        cout <<"Voce corre de norte a sul e encontra apenas uma caverna vazia, sera que ela pode ser util?" << endl;
        cout <<"Voce tambem coleta algumas frutinhas escondidas em alguns arbustos." << endl;
        vCaverninha = true;
        break;
    case 3:
        cout <<"Voce vasculha alguns arbustos e adquire frutinhas." << endl;
        break;
    case 4:
        cout <<"Voce precisa de materiais antes de fazer ferramentas... perdeu seu tempo." << endl;
        break;
    default:
        cout <<"Opcao invalida." << endl;
        return 0;

    }
    system("pause");
    system("cls");

    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Feitos os devidos preparos, o tempo voa e a luz da lua sorri para voce, como se quisesse dizer: prepare-se.";
    cout <<"\nA noite chegou e voce ja consegue ouvir grunhidos e barulhos de ossos batendo, ambos ficando cada vez mais altos.";
    cout <<"\nMelhor procurar um abrigo, afinal, voce nao quer ser pego por 'aquelas coisas' desprevinido...";
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

    //Terceira escolha, apenas continuara se pegou madeira ou se explorou o local
    cout <<"\nO que vai fazer agora?:" << endl;
    cout <<" 1 - Construir uma cabana" << endl;
    cout <<" 2 - Procurar abrigo" << endl;
    cout <<" 3 - Correr" << endl;

    int escolha3;
    cin >> escolha3;

    switch( escolha3 ) {
    case 0:
        cout <<"Voce digitou um caractere, nada aconteceu..." << endl;
        return 0;
        break;
    case 1:
        if(vMadeira) {
            cout <<"Voce utiliza os blocos de madeira para fazer um humilde abrigo, parece o suficiente para passar esta noite." << endl;
        }  else {
            cout <<"Sem recursos para construir, os monstros te encontram e voce nao vive para contar a historia. \nFIM" << endl;
            return 0;
        }
        break;
    case 2:
        if(vCaverninha) {
            cout <<"Voce lembra da caverna que encontrou na sua exploracao e se abriga la, parece o suficiente para passar esta noite." << endl;
        }  else {
            cout <<"Sem sorte na sua procura, os monstros te encontram e voce nao vive para contar a historia.\nFIM" << endl;
            return 0;
        }
        break;
    case 3:
        cout <<"Voce corre, tentando sobreviver, voce ainda nao sabe de quem sao esses barulhos, mas sabe que querem te pegar." << endl;
        cout <<"Algo afiado perfura sua perna e voce cai. Tentando entender o que te atingiu, voce se espanta com o que ve." << endl;
        cout <<"Esqueletos com arcos e flechas te cercam e zumbis pulam em voce, voce sente uma dor absurda em cada mordida." << endl;
        cout <<"Aos poucos, a dor vai sumindo e parece que voce consegue enxergar seus amigos a distancia te chamando...\nFIM" << endl;
        return 0;
        break;
    default:
        cout <<" Opcao invalida!" << endl;
        return 0;
    }
    system("pause");
    system("cls");

    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Apesar do barulho daquelas coisas, voce consegue se acalmar e decide refletir sobre como sera seu proximo dia." << endl;
    cout <<"'Seria bom se eu conseguisse juntar recursos sulficientes para poder fazer ferramentas, preciso me proteger'." << endl;
    cout <<"Depois de se planejar, voce come um pouco e decide descansar, afinal, amanha sera um dia cansativo.";
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

    system("pause");
    system("cls");

    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Como seria bom se tudo isso fosse um pesadelo, neh? Infelizmente nao e, levante que ja esta de dia." << endl;
    cout <<"Voce se espreguica e, sem perder tempo, ja comeca a trabalhar coletando madeira para fazer uma picareta." << endl;
    cout <<"Mas algo nao anda bem... Voce se sente observado enquanto faz sua primeira ferramenta, quem? O que? Por que?" << endl;
    cout <<"Voce decide lidar com isso depois e pegar pedra para fazer equipamentos mais eficientes.";
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

    //Quarta escolha, ele deve tentar encontrar o que estava lhe vigiando
    cout <<"Aquele sentimento volta a te incomodar, mas voce esta animado para fabricar suas ferramentas de pedra..." << endl;

    cout <<" Qual sua decisao? " << endl;
    cout <<" 1 - Ir para casa e fazer as ferramentas" << endl;
    cout <<" 2 - Ouvir sua intuicao e tentar encontrar a causa daquele sentimento" << endl;

    int escolha4;
    cin >> escolha4;

    switch( escolha4 ) {
    case 0:
        cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
        return 0;
        break;
    case 1:
        cout <<"Voce decide voltar ao seu abrigo, provavelmente era apenas algo da sua cabeca... certo?" << endl;
        cout <<"Ao chegar no seu abrigo, voce tropeca em uma corda bem suspeita, sera que voce ativou algo?" << endl;
        cout <<"Tssss... KABOOOM!" << endl;
        cout <<"Voce e jogado pra longe com o impacto da explosao causada pelas TNT's e desmaia, voce caiu na armadilha deles." << endl;
        cout <<"Quando voce abre seus olhos novamente, os responsaveis por dizimar sua equipe saqueiam sua base e, quando te veem...\nFinalizam o trabalho.\n FIM" << endl;
        return 0;
        break;
    case 2:
        cout <<"'Quem esta ai? Melhor se mostrar!' Voce comeca a gritar enquanto adentra na floresta, esperando que alguem apareca." << endl;
        cout <<"Quando suas esperancas estavam quase acabando... Voce encontra uma vila, sera que podem te ajudar?" << endl;
        break;
    default:
        cout <<" Opcao invalida!" << endl;
        return 0;
    }

    system("pause");
    system("cls");

    //Primeira parte mais "de boa", um tempo pra respirar antes das decisoes mais importantes
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Como voce nao encontrou ninguem, voce decide se aproximar daquela vila e tentar adquirir alguma informacao." << endl;
    cout <<"Ao se aproximar daquela vila, os moradores imediatamente reconhecem que voce e um estrangeiro e chamam o chefe deles." << endl;
    cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

    string vNome;

    cout <<"'Ola, jovem! E sempre um prazer receber novos visitantes! Como se chama?' ";

    //Tive que usar esse while pois, quando tentei usar o getline, o sistema passava batido e ia para a proxima parte da historia
/*
    while(getline(cin, vNome))
        if(vNome != ""){
            break;
        }
    //Com o cin funciona e se eu usar o getline la em cima tambem, mas no meio do codigo nao e lido
*/
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, vNome);


    cout <<"Bem-Vindo, " << vNome <<", que belo nome! Eu me chamo Lazio, sou o chefe dessa aldeia chamada Azdac." << endl;
    cout <<"Voce gostaria de ouvir um pouco sobre nossa comunidade?" << endl;

    cout <<" 1 - Eu adoraria, senhor Lazio." << endl;
    cout <<" 2 - Me perdoe, senhor Lazio, mas nao estou com muito tempo livre." << endl;

    int vEscolha5;
    cin >> vEscolha5;

    switch( vEscolha5 ) {
    case 0:
        cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
        return 0;
        break;
    case 1:
        cout <<"'Que bom, jovem! Bem, por onde eu comeco...' *Lazio te acompanha em um tour por Azdac*." << endl;
        cout <<"'Nossa civilizacao tem ligacao forte com a natureza, mas ainda assim temos recursos e somos muito avancados com nossos  mecanismos.'" << endl;
        cout <<"'Acho que a principal caracteristica desse povo e que nos nunca nos esquecemos de nossas raizes!'" << endl;
        cout <<"'Nossa biblioteca publica esta cheia de ritos e mitos que foram passados com o tempo e perduram ate hoje!'" << endl;
        cout <<"'E bem no meio dela, nosso maior orgulho se encontra...' *Ele aponta para o meio da biblioteca e voce ve aquilo que tantoalmejava." << endl;
        cout <<"SIM! O MAIOR PRESENTE QUE NOSSOS ANCESTRAIS NOS DEIXARAM, A ESMERALDA!\n Voce e cegado pela beleza daquela joia." << endl;
        cout <<"Voce nunca tinha visto uma de perto, aquilo que voce tanto buscou, tao perto de voce." << endl;
        cout <<"Incrivel ne? Eu sei, tambem acho. Mas enfim, chega de historias, o que voce busca, " << vNome <<"?" << endl;
        break;
    case 2:
        cout <<"'Ah, verdade, voce deve estar bem atarefado. Mas aproveitando este encontro, o que voce procura?" << endl;
        break;
    default:
        cout <<" Opcao invalida!" << endl;
        return 0;
    }

    system("pause");
    system("cls");

    //Explicacao pre escolha
    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Voce explica ao lider que estas em busca de uma esmeralda para que o reino de Zou possa continuar de pe." << endl;
    cout <<"'Puxa vida... deve ser bem complicado carregar o peso de um reino inteiro nas costas e sozinho...'" << endl;
    cout <<"'Nos sabemos do poder e importancia que uma esmeralda tem... nos da vila gostariamos de te ajudar com algo!'" << endl;
    cout <<"O lider Lazio te presenteia com uma armadura simples e uma picareta de ferro, em perfeito estado para minerar." << endl;
    cout <<"'Apesar de voce ter suas motivacoes e planos, nos gostariamos de te pedir ajuda, voce parece forte.'" << endl;
    cout <<"'Existe um povo inimigo nosso que vive assaltando e matando inocentes, amanha nos vamos dar um jeito nisso." << endl;
    cout <<"'Gostaria de ter voce para auxiliar meus soldados, vou estar la tambem, o que acha?" << endl;
    cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

    system("pause");
    system("cls");

    cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Depois de tanta conversa, voce diz para o lider que esta ficando tarde e vai fazer sua escolha no amanhecer" << endl;
    cout <<"Assim, o lider lhe apresenta um aposento para ficar na vila e se despede." << endl;
    cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

    //Escolha que vai determinar o final do jogador
    cout <<"Ja e dia. Todos ainda estao dormindo.\nSua.\nEscolha.\nImporta." << endl;

    cout <<" Va em frente: " << endl;
    cout <<" 1 - Roubar a esmeralda da vila e fugir" << endl;
    cout <<" 2 - Seguir por conta propria" << endl;
    cout <<" 3 - Auxiliar na guerra" << endl;

    bool vLadrao, vMinerar, vGuerra;
    vLadrao = vMinerar = vGuerra = false;
    int vEscolha6;
    cin >> vEscolha6;

    switch( vEscolha6 ) {
    case 0:
        cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
        return 0;
        break;
    case 1:
        cout <<"Coitadinhos... confiaram em um completo estranho! Voce pega a esmeralda da biblioteca e sai correndo" << endl;
        vLadrao = true;
        break;
    case 2:
        cout <<"Voce decide honrar seus companheiros caidos e continuar com sua busca pela esmeralda.\nVoce aguarda o lider acordar para lhe comunicar a decisao." << endl;
        vMinerar = true;
        break;
    case 3:
        cout <<"Esse povo te acolheu e ajudou, o minimo e retribuir com ajuda, certo?\nVoce aguarda o lider acordar para lhe comunicar a decisao" << endl;
        vGuerra = true;
        break;
    default:
        cout <<" Opcao invalida!" << endl;
        return 0;

    }

    system("pause");
    system("cls");

    //Final Ruim
    if(vLadrao) {
        cout <<"Quando voce estava quase saindo, uma tempestade de raios comecou, dificultando sua fuga." << endl;
        cout <<"Quer tentar sair mesmo assim?" << endl;
        cout <<"1 - Sim" << endl;
        cout <<"2 - Nao" << endl;

        int vEscolha7;
        cin >> vEscolha7;

        switch( vEscolha7 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            cout <<"Voce sai correndo, no meio da chuva e dos trovoes, quando infelizmente um raio cai em cima de voce." << endl;
            cout <<"Voce sente seu corpo torrar enquanto voce lentamente morre eletrocutado pelos raios que caem em voce." << endl;
            cout <<"Os ceus nao perdoam ladroes.\nFINAL RUIM." << endl;
            return 0;
            break;
        case 2:
            cout <<"Voce decide voltar para a vila e se abrigar ate a chuva passar." << endl;
            cout <<"Mas quando voce volta, os moradores nao estao muito felizes com sua volta." << endl;
            cout <<"Arqueiros surgem por todos os lados e flechas perfuram sua pele." << endl;
            cout <<"Lazio aparece e apenas sacode a cabeca, como se estivesse desapontado com sua acao." << endl;
            cout <<"A vila nao perdoa ladroes.\nFINAL RUIM" << endl;
            return 0;
            break;
        }
    }

    //Final minerar sozinho
    if(vMinerar) {
        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Voce comunica sua decisao para o lider, mas antes de ir, ele chama sua atencao." <<endl;
        cout <<"'Jovem, nos sabemos do local de uma das esmeraldas, como e um caso urgente, gostaria de te orientar.'" << endl;
        cout <<"'Naquela caverna seguindo ao sul, suas paredes comecam cinza e vao escurecendo conforme voce adentra.'" << endl;
        cout <<"'Quando estiver na escuridao total, encoste na parede a direita e repita este toque nela:'" << endl;
        cout <<"'Toc, Toc, TocToc, Toc, Toc, TocToc, TocToc. Nenhum a mais, nenhum a menos.'" << endl;
        cout <<"'E cuidado la dentro, dizem nossas lendas que uma criatura alta, magra e obscura guarda aquela joia..." << endl;
        cout <<"'Eu nao ficaria olhando de bobeira la...'" << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Voce adentra a caverna cheio de animacao e esperancas, finalmente vais voltar para casa e salvar seu reino." << endl;
        cout <<"Mas seus pensamentos alegres comecam a se dissipar cada vez que voce adentra mais na caverna." << endl;
        cout <<"A ideia daquele monstro desconhecido pairava sobre sua cabeca, se nem mesmo aquele povo o conhece, imagine voce?" << endl;
        cout <<"'E se eu nao escapar? E se ele me pegar? Ou melhor, o que e ele?' Voce pensava consigo mesmo" << endl;
        cout <<"De tanto pensar, voce nem repara que estava em completa escuridao. Finalmente chegou a hora..." << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Faca o toque que Lazio lhe ensinou: ";

        string vToqueR;
        vToqueR ="Toc, Toc, TocToc, Toc, Toc, TocToc, TocToc.";

        string vToqueJ;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin, vToqueJ);

        if(vToqueJ == vToqueR) {
            cout <<"A parede de pedra se racha ao meio e voce ve a esmeralda brilhando la no fundo." << endl;
        } else {
            cout <<"O chao se abre bem em baixo de voce e voce morre empalado por estacas de madeira\n FIM." << endl;
            return 0;
        }

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Cego pela esmeralda, voce sai correndo para pega-la, quando voce da de cara em algo e cai..." << endl;
        cout <<"Nao parecia uma parede, pois nao se machucou, seja la o que e, ainda esta na sua frente." << endl;
        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;

        cout <<" O que quer fazer? " << endl;
        cout <<" 1 - Olhar pra cima e ver no que voce trombou." << endl;
        cout <<" 2 - Dar um golpe com sua picareta." << endl;
        cout <<" 3 - Desviar com cuidado e pegar a esmeralda." << endl;

        bool vEnderman, vMinEsmeralda;
        vEnderman = vMinEsmeralda = false;
        int vEscolha8;
        cin >> vEscolha8;

        switch( vEscolha8 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            cout <<"Voce olha pra cima e... Voce olhou em seus olhos vazios. Voce fez algo muito ruim. E algo ruim acontecera." << endl;
            vEnderman = true;
            break;
        case 2:
            cout <<"Voce balanca sua picareta e... Sumiu? Acho que nao e um bom sinal..." << endl;
            vEnderman = true;
            break;
        case 3:
            cout <<"Voce lembra que Lazio disse para nao olhar nem perder tempo, entao lentamente rasteja, pega a esmeralda e sai correndo." << endl;
            vMinEsmeralda = true;
            break;
        default:
            cout <<" Opcao invalida!" << endl;
            return 0;

        }

        system("pause");
        system("cls");

        if(vEnderman) {
            cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
            cout <<"Voce comeca a ouvir os barulhos daquela criatura por todos os lados, como se estivesse se teleportando." << endl;
            cout <<"'Em cima! Na direita! Esquerda! Na frente!' Sua mente fica confusa e nem sabe o que fazer." << endl;
            cout <<"Paralisado de medo, voce comeca a levar golpes fortissimos de todos os lados, e...\nAos poucos...\nTudo...\nEscurece...\nFIM." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if(vMinEsmeralda) {
            cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
            cout <<"Parece que, seja la no que voce trombou, sumiu, mas voce nao se sente em perigo..." << endl;
            cout <<"Melhor sair dai logo antes que haja perigo verdadeiro, certo?" << endl;
            cout <<"Animadissimo, voce sai da caverna e ve que alguem dixou um cavalo pronto para montar... seria confiavel?" << endl;
            cout <<"Voce ve uma etiqueta escrita 'Lazio'... Voce nunca se esquecera dos favores que esse grande lider fez." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

            cout <<"Com grandes poderes, grandes responsabilidades, vem a sua cabeca a vontade de ficar com a esmeralda e vendela por ENORMES quantias." << endl;
            cout <<"Todos de Zou acham que voce esta morto e ninguem veio tentar te salvar, injusto com voce, nao?" << endl;
            cout <<"\nQual sua decisao?" << endl;
            cout <<" 1 - Ficar com a esmeralda e fugir." << endl;
            cout <<" 2 - Voltar a Zou." << endl;

            int vEscolha9;
            cin >> vEscolha9;

            switch( vEscolha9 ) {
            case 0:
                cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
                return 0;
                break;
            case 1:
                cout <<"Voce fica com a esmeralda e segue sem rumo com seu cavalo procurando um novo reino.\nFIM." << endl;
                return 0;
                break;
            case 2:
                cout <<"Voce decide ser etico e correto e volta para Zou cavalgando com a esperanca do povo na sua mala." << endl;
                break;
            default:
                cout <<" Opcao invalida!" << endl;
                return 0;

            }
            system("pause");
            system("cls");

            cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
            cout <<"Chegando de volta em Zou, o povo inteiro te recebe com olhares de duvida, murmurios preenchem o ar enquanto voce passa." << endl;
            cout <<"Chegando no castelo, a animacao bate em voce, alem de ter salvado seu reino natal, vai enriquecer com a recompensa!" << endl;
            cout <<"Voce entra na sala do rei, lhe entrega a esmeralda e sua devida recompensa e paga." << endl;
            cout <<"E, gracas a voce, o reino de Zou consegui sair das crises, voltar ao cenario politico e voce virou um grande heroi!" << endl;
            cout <<"FIM." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        }
    }

    if(vGuerra) {
        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Voce comunica sua decisao ao chefe, ele parece feliz em te-lo ao seu lado como um combatente de primeira." << endl;
        cout <<"Lazio fala que hoje sera um dia de preparacao e que amanha pela manha irao sair para atacar." << endl;
        cout <<"Mas antes de iniciar, voce precisa escolher como quer batalhar, nao? \nVa em frente e escolha" << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        cout <<" 1 - Arqueiro." << endl;
        cout <<" 2 - Escudeiro." << endl;
        cout <<" 3 - Guerreiro." << endl;

        int vEscolha10;
        bool vArco, vEscudo, vEspada;
        vArco = vEscudo = vEspada = false;
        cin >> vEscolha10;

        switch( vEscolha10 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            cout <<"Com sua mira fatal e precisa, ser um arqueiro vai ser divertido." << endl;
            vArco = true;
            break;
        case 2:
            cout <<"Proteger todos eh primordial, um escudo cairia bem." << endl;
            vEscudo = true;
            break;
        case 3:
            cout <<"Estar no meio da acao eh o mais divertido, a linha de frente parece legal." << endl;
            vEspada = true;
            break;
        default:
            cout <<" Opcao invalida!" << endl;
            return 0;
        }

        cout <<"Escolhida a classe, voce treina o dia inteiro e, exausto, vai para seu aposento dormir, amanha sera um dia longo." << endl;

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Ja bem cedo, voce se reune aos seus companheiro que, juntos ao lider, marcham em direcao a base dos inimigos." << endl;
        cout <<"'Jovem... nossos inimigos... os Kadecs, querem juntar varias esmeraldas para se tornarem a nacao mais forte e rica deste mundo." << endl;
        cout <<"'Voce entende que sera uma batalha ardua, certo?' (S/N)." << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        char vResposta;
        cin >> vResposta;

        if(vResposta == 's') {
            cout <<"Muito bem entao, espero que voce nao se surpreenda quando ver." << endl;
        } else {
            cout <<"Entao vou guardar a surpresa para quando ve-los, acho que voce nao vai gostar..." << endl;
        }
        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"'Antes de engajarmos, precisamos de um plano, por onde vamos entrar?'" << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        cout <<" 1 - Porta da frente." << endl;
        cout <<" 2 - Abrir um buraco na parede com TNT." << endl;
        cout <<" 3 - Entrar por tras." << endl;

        int vEscolha11;
        cin >> vEscolha11;

        switch( vEscolha11 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            cout <<"'Pela frente? Voce quer tanto assim morrer? Nos vamos pelos fundos, isso assim.'" << endl;
            break;
        case 2:
            cout <<"'Se gosta tanto de fogos de artificio, va assistir um festival porque nos vamos pelos fundos.'" << endl;
            break;
        case 3:
            cout <<"'Em silencio e fatalmente, que otima ideia!'" << endl;
            break;
        default:
            cout <<" Opcao invalida!" << endl;
            return 0;
        }

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Apos lentamente chegarem nos fundos, voce faz um sinal para que todos parem e comeca uma contagem." << endl;
        cout <<"No tres, voces arrombam a porta e, quando voce da de cara com os inimigos, um filme vem a sua cabeca." << endl;
        cout <<"O borrao que havia em sua memoria some. Foram eles que saquearam e mataram seus companheiros." << endl;
        cout <<"Finalmente cara a cara com os malditos malfeitores, numa explosao de raiva voce parte pra cima deles." << endl;

        if(vArco) {
            cout <<"Com suas flechas afiadissimas, voce manuseia seu arco de maneira impiedosa e dispara flechas para todos os lados." << endl;
            cout <<"Quanto mais inimigos apareciam, mais voce aumentava a velocidade, em um movimento de vinganca ardente." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if(vEscudo) {
            cout <<"Protegendo e afastando inimigos, voce pensa nos Azdac como seus companheiros caidos e os protege com sua vida." << endl;
            cout <<"Quanto mais inimigos apareciam, mais forca voce usava para proteger seus aliados, e ao mesmo tempo empurrava seus inimigos." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if(vEspada) {
            cout <<"Com movimentos embutidos de forca e sede de sangue, voce cortava e debilitava seus oponentes." << endl;
            cout <<"Quanto mais inimigos apareciam, mais fatal e cirurgico em seus golpes voce ficava." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        }

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"Apesar de todos os esforcos, eles nao paravam de vir, entao voce, Lazio e alguns Aztecs decidem avancar ate o chefe." << endl;
        cout <<"Enquanto isso, os outros soldados distraiam os Kadecs para abrir caminho para voces." << endl;
        cout <<"Quase chegando na suposta sala do chefe, uma parede se ergue do chao, dividindo voce e Lazio." << endl;
        cout << vNome <<"! Nao se preocupe comigo, vou tentar acabar com o lider deles, tente achar uma maneira de entrar aqui!" << endl;
        cout <<"Barulhos de espadas se batendo preenchiam o ambiente enquanto voce tentava achar uma maneira de entrar." << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        cout <<"Rapido! Olhe ao redor e tente achar alguma maneira de entrar!" << endl;

        cout <<" 1 - Quebrar uma janela." << endl;
        cout <<" 2 - Explodir a parede." << endl;

        int vEscolha12;
        cin >> vEscolha12;

        switch( vEscolha12 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            cout <<"Voce quebra a janela com sua arma e pula, mas ao pisar no chao, voce ativa um botao secreto... Tsss..." << endl;
            break;
        case 2:
            cout <<"Enquanto os Azdecs seguram os Kadecs para voce, voce posiciona as TNTs e aciona..." << endl;
            break;
        default:
            cout <<" Opcao invalida!" << endl;
            return 0;
        }

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout <<"BOOM. Tudo comeca a tremer, a estrutura esta colapsando! E agora? Como vai sair dai?" << endl;
        cout <<"Ao olhar para a sala do chefe, voce ve de um lado uma grande pilha de esmeraldas.\nE do outro, Lazio ajoelhado com uma espada em seu pescoco, parece que ele foi derrotado." << endl;
        cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

        cout <<"O chefe dos Kadecs esta de costas para voce, qual sua decisao?" << endl;

        cout <<" 1 - Salvar Lazio." << endl;
        cout <<" 2 - Agarrar as esmeraldas." << endl;

        int vEscolha13;
        bool vLazioVivo;
        vLazioVivo = false;
        cin >> vEscolha13;

        switch( vEscolha13 ) {
        case 0:
            cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
            return 0;
            break;
        case 1:
            if(vArco) {
                cout <<"Apesar do tremor da estrutura e da tensao, voce dispara sua ultima flecha, que crava no cranio do chefe." << endl;
                cout <<"Enquanto voce corria para socorrer Lazio, o lado da sala com as esmeraldas colapsa e elas caem la em baixo." << endl;
                vLazioVivo = true;
            }

            if(vEscudo) {
                cout <<"Com medo de perder mais um parceiro, voce da um encontrao no chefe, o qual quebra uma janela e cai." << endl;
                cout <<"Enquanto voce corria para socorrer Lazio, o lado da sala com as esmeraldas colapsa e elas caem la em baixo." << endl;
                vLazioVivo = true;
            }

            if(vEspada) {
                cout <<"Com seus companheiros caidos em mente, voce impiedosamente atravessa sua espada no chefe, satisfazendo sua vinganca." << endl;
                cout <<"Enquanto voce corria para socorrer Lazio, o lado da sala com as esmeraldas colapsa e elas caem la em baixo." << endl;
                vLazioVivo = true;
            }
            break;
        case 2:
            cout <<"Voce decide que eh melhor focar na sua missao principal e corre para a pilha de esmeraldas." << endl;
            cout <<"Com o tremor da estrutura, voce so consegue agarrar uma, mas eh o suficiente para Zou." << endl;
            break;
        default:
            cout <<" Opcao invalida!" << endl;
            return 0;
        }

        system("pause");
        system("cls");

        cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
        if(vLazioVivo) {
            cout <<"Voce levanta Lazio e ambos saem correndo da sala, procurando o lugar de onde vieram." << endl;
            cout <<"Lazio faz um assobio especifico e todos os Azdac correm para sua posicao, voces entao batem em retirada." << endl;
            cout <<"'Jovem... voce salvou a minha vida, sou um eterno devedor seu, eu queria muito ter agarrado uma daquelas esmeraldas...'" << endl;
            cout <<"'Mas ele me parou antes que eu alcancasse... me perdoe...'" << endl;
            cout <<"Mas do nada, um dos soldados tira do bolso uma esmeralda e lhe entrega, ele diz que encontrou quando tudo comecou a colapsar." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
            cout <<"Com a guerra terminada, a gratidao do povo e a esmeralda em maos, voce tem uma decisao a fazer:" << endl;

            cout <<" 1 - Ficar com a esmeralda em Azdac." << endl;
            cout <<" 2 - Voltar a Zou." << endl;

            int vEscolha14;
            cin >> vEscolha14;

            switch( vEscolha14 ) {
            case 0:
                cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
                return 0;
                break;
            case 1:
                cout <<"Voce decide se tornar um cidadao Azdac, afinal, eles apresentaram se importar e gostar de voce.\n Enquanto isso ninguem de Zou veio te procurar, e alias, todos devem achar que voce morreu.\nFIM." << endl;
                return 0;
                break;
            case 2:
                cout <<"Voce decide ser etico e correto e volta para Zou correndo com a esperanca do povo na sua mala." << endl;
                system("pause");
                system("cls");
                cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
                cout <<"Chegando de volta em Zou, o povo inteiro te recebe com olhares de duvida, murmurios preenchem o ar enquanto voce passa." << endl;
                cout <<"Chegando no castelo, a animacao bate em voce, alem de ter salvado seu reino natal, vai enriquecer com a recompensa!" << endl;
                cout <<"Voce entra na sala do rei, lhe entrega a esmeralda e sua devida recompensa e paga." << endl;
                cout <<"E, gracas a voce, o reino de Zou conseguiu sair das crises, voltar ao cenario politico e voce virou um grande heroi!" << endl;
                cout <<"FIM." << endl;
                cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
                return 0;
                break;
            default:
                cout <<" Opcao invalida!" << endl;
                return 0;
            }

        }

        if(!vLazioVivo) {
            cout <<"Sem olhar para tras, voce corre para bem longe da base dos Kadecs enquanto desvia dos destrocos." << endl;
            cout <<"Sua mente fica imaginando o que pode ter acontecido com Lazio e os outros, mas voce se consola esperando que tudo fique bem." << endl;
            cout <<"Com sorte, voce sai vivo daquela bagunca e se encontra bem longe de tudo." << endl;
            cout <<"Com a esmeralda na mao, voce tem uma decisao importante para ser feita:" << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;

            cout <<"\n 1 - Ficar com a esmeralda e fugir." << endl;
            cout <<" 2 - Voltar a Zou." << endl;

            int vEscolha15;
            cin >> vEscolha15;

            switch( vEscolha15 ) {
            case 0:
                cout <<" Voce digitou um caractere, nada aconteceu..." << endl;
                return 0;
                break;
            case 1:
                cout <<"Voce fica com a esmeralda e segue sem rumo procurando um novo reino.\nFIM." << endl;
                return 0;
                break;
            case 2:
                cout <<"Voce decide ser etico e correto e volta para Zou correndo com a esperanca do povo na sua mala." << endl;
                break;
            default:
                cout <<" Opcao invalida!" << endl;
                return 0;

            }
            system("pause");
            system("cls");

            cout <<"\n----------------------------------------------------------------------------------------------------------------" << endl;
            cout <<"Chegando de volta em Zou, o povo inteiro te recebe com olhares de duvida, murmurios preenchem o ar enquanto voce passa." << endl;
            cout <<"Chegando no castelo, a animacao bate em voce, alem de ter salvado seu reino natal, vai enriquecer com a recompensa!" << endl;
            cout <<"Voce entra na sala do rei, lhe entrega a esmeralda e tem sua devida recompensa paga." << endl;
            cout <<"E, gracas a voce, o reino de Zou conseguiu sair das crises, voltar ao cenario politico e voce virou um grande heroi!" << endl;
            cout <<"FIM." << endl;
            cout <<"------------------------------------------------------------------------------------------------------------------" << endl;
        }


    }


    return 0;
}
