// GestorFrases.cpp
//
/////////////////////////////////////////////////////////////////////////////

#include "../systems/cpc6128.h"
#include "Juego.h"
#include "GestorFrases.h"
#include "Marcador.h"

using namespace Abadia;

/////////////////////////////////////////////////////////////////////////////
// tabla de frases
/////////////////////////////////////////////////////////////////////////////

	//CPC
	//char * GestorFrases::frases[0x38] = {

	//VGA
	//Anyadimos una frase mas que en la version original
	//para limpiar el area de frases al cargar/grabar las partidas
	//Cambiamos a un array de frases por cada idioma
	char * GestorFrases::frases[8][0x38+1] = {
		{ // 0 Castellano
	"SECRETUM FINISH AFRICAE, MANUS SUPRA XXX AGE PRIMUM ET SEPTIMUM DE QUATOR",
	"BIENVENIDO A ESTA ABADIA, HERMANO. OS RUEGO QUE ME SIGAIS. HA SUCEDIDO ALGO TERRIBLE",
	"TEMO QUE UNO DE LOS MONJES HA COMETIDO UN CRIMEN. OS RUEGO QUE LO ENCONTREIS ANTES DE QUE LLEGUE BERNARDO GUI, PUES NO DESEO QUE SE MANCHE EL NOMBRE DE ESTA ABADIA",
	"DEBEIS RESPETAR MIS ORDENES Y LAS DE LA ABADIA. ASISTIR A LOS OFICIOS Y A LA COMIDA. DE NOCHE DEBEIS ESTAR EN VUESTRA CELDA",
	"DEJAD EL MANUSCRITO DE VENACIO O ADVERTIRE AL ABAD",
	"DADME EL MANUSCRITO, FRAY GUILLERMO",
	"LLEGAIS TARDE, FRAY GUILLERMO",
	"ESTA ES VUESTRA CELDA, DEBO IRME",
	"OS ORDENO QUE VENGAIS",
	"DEBEIS ABANDONAR EL EDIFICIO, HERMANO",
	"ADVERTIRE AL ABAD",
	"DEBEMOS IR A LA IGLESIA, MAESTRO",
	"DEBEMOS IR AL REFECTORIO, MAESTRO",
	"PODEIS IR A VUESTRAS CELDAS",
	"NO HABEIS RESPETADO MIS ORDENES. ABANDONAD PARA SIEMPRE ESTA ABADIA",
	"ESCUCHAD HERMANO, HE ENCONTRADO UN EXTRA�O LIBRO EN MI CELDA",
	"ENTRAD EN VUESTRA CELDA, FRAY GUILLERMO",
	"HA LLEGADO BERNARDO, DEBEIS ABANDONAR LA INVESTIGACION",
	"�DORMIMOS?, MAESTRO",
	"DEBEMOS ENCONTRAR UNA LAMPARA, MAESTRO",
	"VENID AQUI, FRAY GUILLERMO",
	"HERMANOS, VENACIO HA SIDO ASESINADO",
	"DEBEIS SABER QUE LA BIBLIOTECA ES UN LUGAR SECRETO. SOLO MALAQUIAS PUEDE ENTRAR. PODEIS IROS",
	"OREMOS",
	"HERMANOS, BERENGARIO HA DESAPARECIDO. TEMO QUE SE HAYA COMETIDO OTRO CRIMEN",
	"PODEIS COMER, HERMANOS",
	"HERMANOS, HAN ENCONTRADO A BERENGARIO ASESINADO",
	"VENID, FRAY GUILLERMO, DEBEMOS ENCONTRAR A SEVERINO",
	"DIOS SANTO... HAN ASESINADO A SEVERINO Y LE HAN ENCERRADO",
	"BERNARDO ABANDONARA HOY LA ABADIA",
	"MA�ANA ABANDONAREIS LA ABADIA",
	"ERA VERDAD, TENIA EL PODER DE MIL ESCORPIONES",
	"MALAQUIAS HA MUERTO",
	"SOIS VOS, GUILERMO... PASAD, OS ESTABA ESPERANDO. TOMAD, AQUI ESTA VUESTRO PREMIO",
	"ESTAIS MUERTO, FRAY GUILLERMO, HABEIS CAIDO EN LA TRAMPA",
	"VENERABLE JORGE, VOIS NO PODEIS VERLO, PERO MI MAESTRO LLEVA GUANTES. PARA SEPARAR LOS FOLIOS TENDRIA QUE HUMEDECER LOS DEDOS EN LA LENGUA, HASTA QUE HUBIERA RECIBIDO SUFICIENTE VENENO",
	"SE ESTA COMIENDO EL LIBRO, MAESTRO",
	"DEBEIS ABANDONAR YA LA ABADIA",
	"ES MUY EXTRA�O, HERMANO GUILLERMO. BERENGARIO TENIA MANCHAS NEGRAS EN LA LENGUA Y EN LOS DEDOS",
	"PRONTO AMANECERA, MAESTRO",
	"LA LAMPARA SE AGOTA",
	"HABEIS ENTRADO EN MI CELDA",
	"SE HA AGOTADO LA LAMPARA",
	"JAMAS CONSEGUIREMOS SALIR DE AQUI",
	"ESPERAD, HERMANO",
	"OCUPAD VUESTRO SITIO, FRAY GUILLERMO",
	"ES EL COENA CIPRIANI DE ARISTOTELES. AHORA COMPRENDEREIS POR QUE TENIA QUE PROTEGERLO. CADA PALABRA ESCRITA POR EL FILOSOFO HA DESTRUIDO UNA PARTE DEL SABER DE LA CRISTIANDAD. SE QUE HE ACTUADO SIGUIENDO LA VOLUNTAD DEL SE�OR... LEEDLO, PUES, FRAY GUILLERMO. DESPUES TE LO MOSTRARE A TI MUCHACHO",
	"FUE UNA BUENA IDEA �VERDAD?; PERO YA ES TARDE",
	"QUIERO QUE CONOZCAIS AL HOMBRE MAS VIEJO Y SABIO DE LA ABADIA",
	"VENERABLE JORGE, EL QUE ESTA ANTE VOS ES FRAY GUILLERMO, NUESTRO HUESPED",
	"SED BIENVENIDO, VENERABLE HERMANO; Y ESCUCHAD LO QUE OS DIGO. LAS VIAS DEL ANTICRISTO SON LENTAS Y TORTUOSAS. LLEGA CUANDO MENOS LO ESPERAS. NO DESPERDICIEIS LOS ULTIMOS DIAS",
	"LO SIENTO, VENERABLE HERMANO, NO PODEIS SUBIR A LA BIBLIOTECA",
	"SI LO DESEAIS, BERENGARIO OS MOSTRARA EL SCRIPTORIUM",
	"AQUI TRABAJAN LOS MEJORES COPISTAS DE OCCIDENTE",
	"AQUI TRABAJABA VENACIO",
	"VENERABLE HERMANO, SOY SEVERINO, EL ENCARGADO DEL HOSPITAL. QUIERO ADVERTIROS QUE EN ESTA ABADIA SUCEDEN COSAS MUY EXTRA�AS. ALGUIEN NO QUIERE QUE LOS MONJES DECIDAN POR SI SOLOS LO QUE DEBEN SABER"
	// Tiene que tener al menos un caracter, sino al hacer un frase++
	// en el bucle que recorre la frase se va de madre, al pensar
	// que al menos hay un caracter...
	, " " //	Limpiar el area de frases al cargar/salvar una partida
		}, // Fin textos 0 castellano
		{  // 1 Ingl�s
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"WELCOME TO THIS ABBEY, BROTHER. I BEG YOU TO FOLLOW ME. SOMETHING HORRIBLE HAS HAPPENED",
	"I AM AFRAID THAT ONE OF THE MONKS HAS COMMITTED A MURDER. I BEG YOU TO FIND HIM BEFORE BERNARD GUI ARRIVES, AS I DO NOT WISH THE NAME OF THIS ABBEY TO BE STAINED.",
	"YOU MUST RESPECT MY ORDERS AND THE ONES OF THE ABBEY. ATTEND THE OFFICES AND MEAL. AT NIGHT YOU MUST BE IN YOUR CELL.",
	"LEAVE VENANTIUS MANUSCRIPT OR I WILL WARN THE ABBOT.",
	"GIVE THE MANUSCRIPT TO ME, BROTHER WILLIAM",
	"YOU ARE LATE, BROTHER WILLIAM",
	"THIS IS YOUR CELL. I HAVE TO GO",
	"I ORDER YOU TO COME",
	"YOU MUST LEAVE THE BUILDING, BROTHER",
	"I WILL WARN THE ABBOT",
	"WE MUST GO TO CHURCH, MASTER",
	"WE MUST GO TO THE REFECTORY, MASTER",
	"YOU MAY GO TO YOUR CELLS",
	"YOU HAVE NOT RESPECTED MY ORDERS. LEAVE THIS ABBEY FOR EVER.",
	"LISTEN BROTHER, I HAVE FOUND A STRANGE BOOK IN MY CELL.",
	"GO INTO YOUR CELL, BROTHER WILLIAM",
	"BERNARD HAS ARRIVED, YOU MUST STOP YOUR INVESTIGATION",
	"SHALL WE SLEEP, MASTER?",
	"WE MUST FIND A LAMP, MASTER",
	"COME HERE, BROTHER WILLIAM",
	"BROTHERS, VENANTIUS HAS BEEN MURDERED",
	"YOU MUST KNOW THAT THE LIBRARY IS A SECRET PLACE. JUST MALACHIA CAN GO IN. YOU MAY GO.",
	"OREMUS",
	"BROTHERS, BERENGAR HAS DISAPPEARED. I AM AFRAID ANOTHER MURDER HAS BEEN COMMITTED.",
	"YOU MAY EAT, BROTHERS",
	"BROTHERS, BERENGAR HAS BEEN FOUND MURDERED",
	"COME, BROTHER WILLIAM, WE HAVE TO FIND SEVERINUS",
	"HOLY GOD... SEVERINUS HAS BEEN MURDERED AND LOCKED IN",
	"BERNARD WILL LEAVE THE ABBEY TODAY",
	"TOMORROW, YOU WILL LEAVE THE ABBEY",
	"IT WAS TRUE, IT HAD THE POWER OF THOUSAND SCORPIONS",
	"MALACHIA IS DEAD",
	"IS IT YOU, WILLIAM... COME IN, I WAS WAITING FOR YOU. TAKE THIS, HERE IS YOUR REWARD",
	"YOU ARE DEAD, BROTHER WILLIAM. YOU FELL INTO THE TRAP",
	"VENERABLE JORGE, YOU CANNOT SEE IT, BUT MY MASTER IS WEARING GLOVES. IN ORDER TO SEPARATE THE SHEETS HE SHOULD DAMPEN HIS FINGERS WITH HIS TONGUE, UNTIL HE HAD RECEIVED ENOUGH POISON",
	"HE IS EATING THE BOOK, MASTER",
	"YOU MUST LEAVE THE ABBEY",
	"IT IS VERY STRANGE, BROTHER WILLIAM. BERENGAR HAD BLACK STAINS ON HIS TONGUE AND FINGERS",
	"DAWN WILL BREAK SOON, MASTER",
	"THE LAMP IS RUNNING OUT",
	"YOU HAVE ENTERED MY CELL",
	"THE LAMP HAS RUN OUT",
	"WE WILL NEVER MANAGE TO GET OUT OF HERE",
	"WAIT, BROTHER",
	"TAKE YOUR PLACE, BROTHER WILLIAM",
	"IT IS THE COENA CIPRIANI OF ARISTOTLE. NOW YOU WILL UNDERSTAND WHY I HAD TO PROTECT IT. EACH WORD WRITTEN BY THE PHILOSOPHER HAS DESTROYED A PART OF THE KNOWLEDGE OF CHRISTENDOM. "
	"I KNOW I HAVE ACTED FOLLOWING THE WILL OF GOD. READ IT, THEN, BROTHER WILLIAM. AFTER THAT I WILL SHOW IT TO YOU, KID.",
	"IT WAS A GOOD IDEA, WAS NOT IT?; BUT NOW IT IS TOO LATE.",
	"I WANT YOU TO MEET THE OLDEST AND WISEST MAN IN THE ABBEY",
	"VENERABLE JORGE, THE ONE BEFORE YOU IS BROTHER WILLIAM, OUR GUEST",
	"BE WELCOME, VENERABLE BROTHER; AND LISTEN WHAT I TELL YOU. THE ANTICHRIST MEANS ARE SLOW AND TORTUOUS. HE COMES WHEN YOU DO NOT EXPECT. DO NOT WASTE THE LAST DAYS",
	"I AM SORRY, VENERABLE BROTHER, YOU MAY NOT GO UP TO THE LIBRARY",
	"IF YOU WISH, BERENGAR WILL SHOW YOU THE SCRIPTORIUM",
	"THE BEST COPYISTS IN THE WEST WORK IN HERE",
	"VENANTIUS USED TO WORK HERE",
	"VENERABLE BROTHER, I AM SEVERINUS, THE RESPONSIBLE FOR THE HOSPITAL. I WANT TO WARN YOT THAT VERY STRANGE THINGS HAPPEN IN THIS ABBEY. SOMEONE DOES NOT WANT THE MONKS TO DECIDE BY THEMSELVES WHAT THEY HAVE TO KNOW.",
	" "
		}, // Fin textos 1 ingles
		{  // 2 Brasil
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"BEM-VINDO A ESTA ABADIA, IRM�O. ROGO QUE ME SIGAS. ACONTECEU ALGO TERR�VEL",
	"TEMO QUE UM DOS MONGES TENHA COMETIDO UM CRIME. ROGO-TE QUE O ENCONTRES ANTES QUE BERNARDO GUI CHEGUE, POIS N�O DESEJO QUE SE MANCHE O NOME DESTA ABADIA",
	"DEVES RESPEITAR MINHAS ORDENS E AS REGRAS DA ABADIA; ASSISTIR AOS OF�CIOS E �S REFEI��ES. � NOITE, DEVES ESTAR EM TUA CELA",
	"DEIXA O MANUSCRITO DE VEN�NCIO OU AVISAREI AO ABADE",
	"D�-ME O MANUSCRITO, FREI GUILHERME",
	"CHEGASTE TARDE, FREI GUILHERME",
	"ESTA � TUA CELA, DEVO IR",
	"ORDENO QUE VENHAS",
	"DEVES ABANDONAR O EDIF�CIO, IRM�O",
	"AVISAREI AO ABADE",
	"DEVEMOS IR � IGREJA, MESTRE",
	"DEVEMOS IR AO REFEIT�RIO, MESTRE",
	"PODEIS IR PARA VOSSAS CELAS",
	"N�O RESPEITASTE MINHAS ORDENS, ABANDONA PARA SEMPRE ESTA ABADIA",
	"ESCUTA, IRM�O, ENCONTREI UM ESTRANHO LIVRO EM MINHA CELA",
	"ENTRA EM TUA CELA, FREI GUILHERME",
	"BERENG�RIO CHEGOU, DEVES ABANDONAR A INVESTIGA��O",
	"DORMIMOS, MESTRE?",
	"DEVEMOS ENCONTRAR UMA LAMPARINA, MESTRE",
	"VEM AQUI, FREI GUILHERME",
	"IRM�OS, VEN�NCIO FOI ASSASSINADO",
	"DEVES SABER QUE A BIBLIOTECA � UM LUGAR SECRETO. SOMENTE MALAQUIAS PODE ENTRAR. PODES IR",
	"OREMOS",
	"IRM�OS, BERENG�RIO DESAPARECEU. TEMO QUE SE TENHA COMETIDO OUTRO CRIME",
	"PODEIS COMER, IRM�OS",
	"IRM�OS, ENCONTRARAM BERENG�RIO ASSASSINADO",
	"VEM, FREI GUILHERME, DEVEMOS ENCONTRAR SEVERINO",
	"SANTO DEUS... ASSASSINARAM SEVERINO E O TRANCARAM",
	"BERNARDO ABANDONAR� HOJE A ABADIA",
	"AMANH� ABANDONAR�S A ABADIA",
	"ERA VERDADE... TINHA O PODER DE MIL ESCORPI�ES",
	"MALAQUIAS EST� MORTO",
	"ES TU, GUILHERME... PASSA, ESTAVA TE ESPERANDO. TOMA, AQUI EST� TEU PR�MIO",
	"EST�S MORTO, FREI GUILHERME, CA�STE NA ARMADILHA",
	"VENER�VEL JORGE, N�O PODES VER, MAS MEU MESTRE USA LUVAS. PARA SEPARAR AS FOLHAS, TERIA QUE UMEDECER OS DEDOS NA L�NGUA AT� QUE TIVESSE RECEBIDO VENENO SUFICIENTE",
	"EST� COMENDO O LIVRO, MESTRE",
	"DEVES ABANDONAR A ABADIA",
	"� MUITO ESTRANHO, IRM�O GUILHERME. BERENG�RIO TINHA MANCHAS NEGRAS NA L�NGUA E NOS DEDOS",
	"LOGO AMANHECER�, MESTRE",
	"O �LEO EST� SE ESGOTANDO",
	"ENTRASTE NA MINHA CELA",
	"O �LEO ESGOTOU-SE",
	"JAMAIS CONSEGUIREMOS SAIR DAQUI",
	"ESPERE, IRM�O",
	"OCUPATEU LUGAR, FREI GUILHERME",
	"� O COENA CIPRIANI DE ARIST�TELES. AGORA COMPREENDES POR QUE TINHA QUE PROTEG�-LO. CADA PALAVRA ESCRITA PELO FIL�SOFO DESTRUIU UMA PARTE DO SABER DA CRISTANTADE. SEI QUE AGI SEGUINDO A VONTADE DO SENHOR... "
	"L� O LIVRO AGORA, FREI GUILHERME, DEPOIS MOSTRA-O PARA TEU DISC�PULO",
	"FOI UMA BOA ID�IA, N�O � VERDADE?  MAS J� � TARDE",
	"QUERO QUE CONHE�AS O HOMEM MAIS VELHO E S�BIO DA ABADIA",
	"VENER�VEL JORGE, QUEM EST� DIANTE DE TI � FREI GUILHERME, NOSSO H�SPEDE",
	"S� BEM-VINDO, VENER�VEL IRM�O; E ESCUTA BEM O QUE TE DIGO. OS CAMINHOS DO ANTI-CRISTO S�O LENTOS E TORTUOSOS. CHEGA QUANDO MENOS O ESPERAS. N�O DESPERDICES OS �LTIMOS DIAS",
	"DESCULPA-ME, VENER�VEL IRM�O, MAS N�O PODES SUBIR � BIBLIOTECA",
	"SE DESEJARES, BERENG�RIO PODER� MOSTRAR-TE O SCRIPTORIUM",
	"AQUI TRABALHAM OS MELHORES COPISTAS DO OCIDENTE",
	"AQUI TRABALHAVA VEN�NCIO",
	"VENER�VEL IRM�O, SOU SEVERINO, O ENCARREGADO DA ENFERMARIA. QUERO ADVERTI-LO QUE NESTA ABADIA ACONTECEM COISAS MUITO ESTRANHAS. ALGU�M N�O QUER QUE OS MONGES DECIDAM POR SI S� O QUE DEVEM SABER",
	" "
		}, // Fin textos 2 Brasil
		{  // 3 Catalan
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"BENVINGUT A AQUESTA ABADIA, GERM�. US PREGO QUE EM SEGUIU. HA SUCCEIT QUELCOM TERRIBLE",
	"EM TEMO QUE UN DELS MONJOS HA COM�S UN CRIM. US PREGO QUE EL TROBEU ABANS QUE ARRIBI BERNAT GUI, DONCS NO DESITJO QUE TAQUI EL NOM D'AQUESTA ABADIA",
	"HEU DE RESPECTAR LES MEVES ORDRES I LES DE L'ABADIA. ASSISTIR ALS OFICIS I AL DINAR. DE NIT HEU D'ESTAR A LA VOSTRA CEL.LA",
	"DEIXEU EL MANUSCRIT D'EN VENANCI O ADVERTIR� A L'ABAT",
	"DONEU-ME EL MANUSCRIT, FRA GUILLEM",
	"ARRIBEU TARD, FRA GUILLEM",
	"AQUESTA ES LA VOSTRA CEL.LA. HE D'ANAR-ME'N",
	"US ORDENO QUE VINGUEU ",
	"HEU D'ABANDONAR L'EDIFICI, GERM�",
	"ADVERTIR� A L'ABAT",
	"HEM D'ANAR A L'ESGL�SIA, MESTRE",
	"HEM D'ANAR AL REFECTORI, MESTRE",
	"PODEU ANAR A LES VOSTRES CEL.LES ",
	"NO HEU RESPECTAT LES MEVES ORDRES. ABANDONEU PER SEMPRE AQUESTA ABADIA",
	"ESCOLTEU GERM�,, HE TROBAT UN ESTRANY LLIBRE A LA MEVA CEL.LA ",
	"ENTREU A LA VOSTRA CEL.LA, FRA GUILLEM",
	"HA ARRIVAT BERNAT, HEU D'ABANDONAR LA INVESTIGACI�",
	"DORMIM, MESTRE?",
	"HEM DE TROBAR UNA L�MPADA, MESTRE",
	"VENIU AQU�, FRA GUILLEM",
	"GERMANS, VENANCI HA ESTAT ASSASSINAT",
	"HEU DE SABER QUE LA BIBLIOTECA �S UN LLOC SECRET. NOM�S MALAQUIES POT ENTRAR. PODEU MARXAR.",
	"PREGUEM",
	"GERMANS, BERENGUER HA DESAPAREGUT. TEMO QUE S'HAGI COM�S UN ALTRE CRIM",
	"PODEU MENJAR, GERMANS",
	"GERMANS, HAN TROBAT A BERENGUER ASSASSINAT",
	"VENIU, FRA GUILLEM, HEM DE TROBAR A SEVER�",
	"D�U SANT... HAN ASSASSINAT A SEVER� I L'HAN TANCAT",
	"BERNAT ABANDONAR� AVUI L'ABADIA",
	"DEM�, ABANDONAREU L'ABADIA",
	"ERA VERITAT, TENIA EL PODER DE MIL ESCORPINS",
	"MALAQUIES HA MORT",
	"SOU VOS, GUILLEM... PASSEU, US ESTAVA ESPERANT. TENIU, AQU� TENIU EL VOSTRE PREMI",
	"ESTEU MORT, FRA GUILLEM. HEU CAIGUT A LA TRAMPA",
	"VENERABLE JORDI, VOS NO PODEU VEURE-HO, PERO EL MEU MESTRE PORTA GUANTS. PER A SEPARAR ELS FOLIS HAURIA D' HUMITEJAR ELS DITS A LA LLENGUA, FINS QUE HAGU�S REBUT PROU VER�",
	"S'EST� MENJANT EL LLIBRE, MESTRE",
	"HEU D'ABANDONAR L'ABADIA",
	"ES MOLT ESTRANY, GERM� GUILLEM. BERENGUER TENIA TAQUES NEGRES A LA LLENGUA I ALS DITS",
	"AVIAT SORTIR� EL SOL, MESTRE",
	"LA L�MPADA S'ESGOTA",
	"HEU ENTRAT A LA MEVA CEL.LA ",
	"S'HA ESGOTAT LA L�MPADA",
	"MAI ACONSEGUIREM SORTIR D'AQU�",
	"ESPEREU, GERM�",
	"OCUPEU EL VOSTRE LLOC, FRA GUILLEM",
	"�S EL COENA CIPRIANI D'ARIST�TIL. ARA COMPRENDREU PER QU� HAVIA DE PROTEGIR-LO. CADA PARAULA ESCRITA PEL FIL�SOF HA DESTRU�T UNA PART DEL SABER DE LA CRISTIANDAT. "
	"S� QUE HE ACTUAT SEGUINT LA VOLUNTAT DEL SENYOR... LLEGIU-LO, DONCS, FRA GUILLEM. DESPR�S T'HO DEMOSTRAR� A TU NOI",
	"VA SER BONA IDEA OI?; PER� JA �S TARD",
	"VULL QUE CONEGUEU A L'HOME M�S VELL I SAVI DE L'ABADIA",
	"VENERABLE JORDI, QUI ESTA DAVANT VOSTRE ES FRA GUILLEM, EL NOSTRE HOSTE",
	"SIGUEU BENVINGUT, VENERABLE GERM�; I ESCOLTEU EL QUE US DIC. LES VIES DE L'ANTICRIST SON LENTES I TORTUOSES. ARRIBA QUAN MENYS HO ESPERES. NO MALGASTEU ELS DARRERS DIES ",
	"HO SENTO, VENERABLE GERM�, NO PODEU PUJAR A LA BIBLIOTECA",
	"SI HO DESITGEU, BERENGUER US MOSTRAR� L'SCRIPTORIUM",
	"AQU� TREBALLEN ELS MILLORS COPISTES D'OCCIDENT",
	"AQU� TREBALLAVA VENANCI",
	"VENERABLE GERM�, S�C SEVER�, L'ENCARREGAT DE L'HOSPITAL. VULL ADVERTIR-VOS QUE A AQUESTA ABADIA SUCCEEIXEN COSES MOLT EXTRANYES. ALG� NO VOL QUE ELS MONJOS DECIDEIXIN PER SI SOLS EL QUE HAN DE SABER",
	" "
		}, // Fin textos 3 Catalan
		{  // 4 Gallego
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"BENVIDO A ESTA ABAD�A, IRM�N. PR�GOVOS QUE ME SIGADES. ACONTECEU ALGO TERRIBLE",
	"T�MOME QUE UN DOS MONXES COMETERA UN CRIME. PR�GOVOS QUE O ATOPEDES ANTES DE QUE CHEGUE BERNARDO GUI, POIS NON � O MEU DESEXO QUE SE MANCHE O NOME DESTA ABAD�A",
	"DEBEDES RESPECTA-LAS MI�AS ORDES E AS DA ABAD�A. ASISTIR �S OFICIOS E � XANTAR. DE NOITE DEBEDES FICAR NA VOSA CELA",
	"DEIXADE O MANUSCRITO DE VENANCIO OU ADVERTIREI � ABADE",
	"D�DEME O MANUSCRITO, FRAI GUILLERME",
	"CHEGADES TARDE, FRAI GUILLERME",
	"ESTA � A VOSA CELA. EU LISCO, TE�O TAREFAS QUE FACER",
	"ORD�NOVOS QUE VE�ADES",
	"DEBEDES ABANDONA-LO EDIFICIO, IRM�N",
	"ADVERTIREI AO ABADE",
	"TEMOS QUE IR � IGREXA, MESTRE",
	"TEMOS QUE IR AO REFECTORIO, MESTRE",
	"PODEDES RETIRARVOS �S VOSAS CELAS",
	"NON ACAT�STEDES AS MI�AS ORDES. DEIXADE PRA SEMPRE ESTA ABAD�A",
	"ESCOITADE IRM�N, ATOPEI UN EXTRANO LIBRO NA MI�A CELA",
	"ENTRADE NA VOSA CELA, FRAI GUILLERME",
	"CHEGOU BERNARDO, DEBEDES ABANDONA-LAS VOSAS PESQUISAS",
	"DURMIMOS?, MESTRE",
	"TEMOS QUE ATOPAR UNHA L�MPADA, MESTRE",
	"VIDE AQUI, FRAI GUILLERME",
	"IRM�NS, VENANCIO FOI ASASINADO",
	"DEBEDES SABER QUE A BIBLIOTECA � UN LUGAR SEGREDO. S� MALAQU�AS PODE ENTRAR. PODEDES IRVOS.",
	"OREMOS",
	"IRM�NS, BERENGARIO DESAPARECEU. T�MOME QUE SE COMETERA OUTRO CRIME",
	"PODEDES XANTAR, IRM�NS",
	"IRM�NS, ATOPARON A BERENGARIO ASASINADO",
	"VIDE, FRAI GUILLERME, DEBEMOS ATOPAR A SEVERINO",
	"DEUS SANTO... ASESINARON A SEVERINO E PECHARONO DENTRO",
	"BERNARDO DEIXAR� HOXE A ABAD�A",
	"MA��N, ABANDONAREDES A ABAD�A",
	"ERA VERDADE, TI�A O PODER DE MIL ESCORPI�NS",
	"MALAQUIAS MORREU",
	"SODES VOS, GUILLERME... PASADE, ESTABAVOS AGARDANDO. TOMADE, AQUI ESTA O VOSO GALARD�N",
	"ESTADES MORTO, FRAI GUILLERME. CA�STEDES NA TRAMPA",
	"VENERABLE XURXO, VOS NON PODEDES VELO, PERO O MEU MESTRE LEVA UNHAS LUVAS. PRA SEPARA-LOS FOLIOS TER�A QUE HUMEDECE-LOS DEDOS NA LINGUA, ATA QUE RECIBIRA VELENO ABONDO",
	"ESTA A COME-LO LIBRO, MESTRE",
	"DEBEDES ABANDONA-LA ABAD�A",
	"ABOF� QUE � EXTRA�O, IRM�N GUILLERME. BERENGARIO TI�A MANCHAS NEGRAS NA LINGUA E NOS DEDOS",
	"DESEGUIDO CHEGAR� O AMENCER, MESTRE",
	"A L�MPADA ESG�TASE",
	"ENTR�STEDES NA MI�A CELA",
	"ESGOTOUSE A L�MPADA",
	"ENDEXAMAIS ACADEREMOS SAIR DE AQU�",
	"AGARDADE, IRM�N",
	"OCUPADE O VOSO SITIO, FRAI GUILLERME",
	"� O COENA CIPRIANI DE ARIST�TELES. AGORA COMPRENDEREDES POR QUE TI�A QUE PROTEXELO. CADA PALABRA ESCRITA POLO FIL�SOFO FIXO ANACOS UNHA PARTE DO SABER DA CRISTIANDADE. "
	"SEI QUE OBREI SIGUINDO A VONTADE DO SE�OR... LEDEO, POIS, FRAI GUILLERME. DESPOIS MOSTRAREICHO A TI RAPAZ",
	"FOI UNHA BOA IDEA  NON � VERDADE?; PERO XA � TARDE",
	"DESEXO QUE CONOZCADES � HOME M�IS VELLO E SABIO DA ABAD�A",
	"VENERABLE XURXO, O QUE ESTA DIANTE VOSA � FRAI GUILLERME, O NOSO H�SPEDE",
	"SEDE BENVIDO, VENERABLE IRM�N; E ESCOITADE O QUE VOS DIGO. AS VIAS DO ANTICRISTO SONVOS LENTAS E TORTUOSAS. CHEGA CANDO MENOS O ESPERAS. NON MALGASTEDES OS DERRADEIROS D�AS",
	"SINTOLLO, VENERABLE IRM�N, NON PODEDES SUBIR � BIBLIOTECA",
	"SE O DESEXASES, BERENGARIO MOSTRARAVOS O SCRIPTORIUM",
	"AQUI TRABALLAN OS MELLORES COPISTAS DE OCCIDENTE",
	"AQUI TRABALLABA VENANCIO",
	"VENERABLE IRM�N, SON SEVERINO, O ENCARGADO DO HOSPITAL. QUERO PREVIRVOS QUE NESTA ABAD�A ACONTECEN COUSAS MOI EXTRANAS. ALGU�N NON DESEXA QUE OS MONXES DECIDAN POR SI S�S O QUE DEBEN DE SABER",
	" "

		}, // Fin textos 4 Gallego
		{  // 5 Italiano
	"SECRETUM FINIS AFRICAE, MANUS SUPRA  AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"BENVENUTO A QUESTA ABBAZIA, FRATELLO. VI PREGO DI SEGUIRMI. QUALCOSA DI TERRIBILE � ACCADUTO",
	"TEMO CHE UNO DEI MONACI ABBIA COMMESSO UN CRIMINE. VI PREGO DI INCONTRARLO PRIMA CHE ARRIVI BERNARDO GUI, POICH� NON DESIDERO CHE IL NOME DI QUESTA ABBAZIA SI MACCHI",
	"DOVETE RISPETTARE I MIEI ORDINI E QUELLI DELLA ABBAZIA. PARTECIPARE ALLE FUNZIONI E AI PASTI. DI NOTTE DOVETE RESTARE NELLA VOSTRA CELLA",
	"LASCIATE IL MANOSCRITTO DI VENANZIO O AVVERTIR� L'ABATE",
	"DATEMI IL MANOSCRITTO, FRATE GUGLIELMO",
	"ARRIVATE TARDI, FRATE GUGLIELMO",
	"QUESTA � LA VOSTRA CELLA. DEVO ANDARE",
	"VI ORDINO DI VENIRE",
	"DOVETE ABBANDONARE L'EDIFICIO, FRATELLO",
	"AVVERTIRE L'ABATE",
	"DOBBIAMO ANDARE ALLA CHIESA, MAESTRO",
	"DOBBIAMO ANDARE AL REFETTORIO, MAESTRO",
	"POTETE RECARVI ALLE VOSTRE CELLE",
	"NON AVETE RISPETTATO I MIEI ORDINI. ABBANDONATE PER SEMPRE QUESTA ABBAZIA",
	"ASCOLTATE FRATELLO, HO TROVATO UNO STRANO LIBRO NELLA MIA CELLA",
	"ENTRATE NELLA VOSTRA CELLA, FRATE GUGLIELMO",
	"� ARRIVATO BERNARDO, DOVETE ABBANDONARE L'INVESTIGAZIONE",
	"DORMIAMO, MAESTRO?",
	"DOBBIAMO TROVARE UNA LAMPADA, MAESTRO",
	"VENITE QUI, FRATE GUGLIELMO",
	"FRATELLI, VENANZIO � STATO ASSASSINATO",
	"DOVETE SAPERE CHE LA BIBLIOTECA � UN LUOGO SEGRETO. SOLO MALACHIA PU� ENTRARE. POTETE ANDARE",
	"PREGHIAMO",
	"FRATELLI, BERENGARIO � SCOMPARSO. TEMO CHE SIA STATO COMMESSO UN ALTRO CRIMINE",
	"POTETE MANGIARE, FRATELLI",
	"FRATELLI, HANNO TROVATO BERNARDO ASSASSINATO",
	"VENITE, FRATE GUGLIELMO, DOBBIAMO TROVARE SEVERINO",
	"DIO SANTO... HANNO ASSASSINATO SEVERINO E LO HANNO SEPPELLITO",
	"BERNARDO DOVR� ABBANDONARE OGGI L'ABBAZIA",
	"DOMANI ABBANDONERETE L'ABBAZIA",
	"ERA VERO, AVEVA IL POTERE DI MILLE SCORPIONI",
	"MALACHIA � MORTO",
	"SIETE VOI, GUGLIELMO... PASSATE, VI STAVO ASPETTANDO. PRENDETE, QUESTO � IL VOSTRO PREMIO",
	"SIETE MORTO, FRATE GUGLIELMO. SIETE CADUTO NELLA TRAPPOLA",
	"VENERABILE JORGE, VOI NON POTETE VEDERLO, MA IL MIO MAESTRO PORTA I GUANTI. PER SEPARARE I FOGLI DOVREBBE INUMIDIRE LE DITA CON LA LINGUA, FINO AD AVER INGERITO SUFFICIENTE VELENO",
	"SI STA MANGIANDO IL LIBRO, MAESTRO",
	"DOVETE ABBANDONARE L'ABBAZIA",
	"� MOLTO STRANO, FRATE GUGLIELMO, BERENGARIO AVEVA MACCHIE NERE SULLA LINGUA E SULLE DITA",
	"PRESTO SAR� L'ALBA, MAESTRO",
	"LA LAMPADA SI SPEGNE",
	"SIETE ENTRATI NELLA MIA CELLA",
	"SI � SPENTA LA LAMPADA",
	"NON RIUSCIREMO MAI A USCIRE DA QUI",
	"ASPETTATE, FRATELLO",
	"OCCUPATE IL VOSTRO POSTO, FRATE GUGLIELMO",
	"� IL COENA CYPRIANI DI ARISTOTELE. ORA CAPIRETE PERCH� DOVEVO PROTEGGERLO. OGNI PAROLA SCRITTA DAL FILOSOFO HA DISTRUTTO UNA PARTE DEL SAPERE DELLA CRISTIANIT�. SO DI AVER AGITO SEGUENDO LA VOLONT� DEL SIGNORE... "
	"LEGGETELO, DUNQUE, FRATE GUGLIELMO. DOPO LO MOSTRER� A TE RAGAZZO",
	"� STATA UNA BUONA IDEA, VERO? PER� � GI� TARDI",
	"VOGLIO CHE CONOSCIATE L'UOMO PI� VECCHIO E SAGGIO DELL'ABBAZIA",
	"VENERABILE JORGE, COLUI CHE STA DAVANTI A VOI � FRATE GUGLIELMO, NOSTRO OSPITE",
	"SIETE IL BENVENUTO, VENERABILE FRATELLO; E ASCOLTATE QUELLO CHE VI DICO. LE VIE DELL'ANTICRISTO SONO LENTE E TORTUOSE. ARRIVA QUANDO MENO LO SI ASPETTA. NON SPRECATE GLI ULTIMI GIORNI",
	"SPIACENTE, VENERABILE FRATELLO, NON POTETE SALIRE ALLA BIBLIOTECA",
	"SE LO DESIDERATE BERENGARIO VI MOSTRER� LO SCRIPTORIUM",
	"QUI LAVORANO I MIGLIORI COPISTI D'OCCIDENTE",
	"QUI LAVORAVA VENANZIO",
	"VENERABILE FRATELLO, SONO SEVERINO, L'INCARICATO DELL'OSPEDALE. VOGLIO AVVERTIRVI CHE IN QUESTA ABBAZIA CAPITANO COSE MOLTO STRANE. QUALCUNO NON VUOLE CHE I MONACI DECIDANO DA SOLI QUELLO CHE DEVONO SAPERE",
	" "
		}, // Fin textos 5 Italiano
		{  // 6 Fines
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"TERVETULOA LUOSTARIIMME VELI. PYYD�N TEIT� SEURAAMAAN MINUA. JOTAIN KAUHEAA ON TAPAHTUNUT",
	"PELK��N YHDEN MUNKEISTAMME SYYLLISTYNEEN MURHAAN. PYYD�N, ETSIK�� MURHAAJA ENNEN BERNARD GUIN SAAPUMISTA, JOTTA LUOSTARIMME NIMI EI TAHRIINTUISI VEREEN.",
	"TEID�N TULEE KUNNIOITTAMAN MINUN K�SKYJ�NI JA T�M�N LUOSTARIN S��NT�J�. OSALLISTUKAA PALVELUKSIIN JA ATERIOILLE. Y�T TEID�N TULEE VIETT�M�N KAMMIOISSANNE.",
	"J�TT�K�� VENANTIUKSEN K�SIKIRJOITUS RAUHAAN TAI KERRON TOIMISTANNE APOTTILLE.",
	"VELI WILLIAM, LUOVUTTAKAA K�SIKIRJOITUS MINULLE.",
	"VELI WILLIAM, OLETTE MY�H�SS�",
	"T�M� ON KAMMIONNE. MINUN ON MENT�V�.",
	"M��R��N TEID�T SEURAAMAAN MINUA",
	"TEID�N TULEE POISTUA RAKENNUKSESTA VELI.",
	"AION VAROITTAA APOTTIA",
	"MESTARI, MENK��MME KIRKKOON",
	"MESTARI, MENK��MME REFEKTORIOON.",
	"VOITTE MENN� KAMMIOIHINNE",
	"ETTE OLE KUNNIOITTANUT S��NT�J�NI. POISTUKAA T�ST� LUOSTARISTA I�KSI.",
	"KUUNNELKAA VELJENI, OLEN L�YT�NYT KAMMIOSTANI KUMMALLISEN KIRJAN",
	"MENE KAMMIOOSI, VELI WILLIAM",
	"BERNARD ON SAAPUNUT. TEID�N T�YTYY LOPETTAA TUTKIMUKSENNE.",
	"NUKUMMEKO MESTARINI?",
	"MESTARI, MEID�N ON L�YDETT�V� LAMPPU.",
	"VELI WILLIAM, TULKAA T�NNE",
	"VELJET, VENANTIUS ON MURHATTU.",
	"TIED�, ETT� KIRJASTO ON SALATTU PAIKKA JA VAIN MALACHIAS VOI LIIKKUA SIELL�. PALATKAA TOIMIINNE.",
	"RUKOILKAAMME",
	"VELJET, BERENGAR ON KADONNUT. PELK��N, ETT� ON TAPAHTUNUT UUSI MURHA.",
	"VELJET, SY�K��MME.",
	"VELJET, BERENGAR ON L�YDETTY MURHATTUNA.",
	"TULKAA VELI WILLIAM, MEID�N ON L�YDETT�V� SEVERINUS.",
	"JUMALAN T�HDEN... SEVERINUS ON MURHATTU JA LUKITTU SIS��N.",
	"BERNARD J�TT�� LUOSTARIN T�N��N.",
	"HUOMENNA TEID�N ON L�HDETT�V� LUOSTARISTA",
	"TOTISESTI, SIIN� OLI TUHANNEN SKORPIONIN VOIMA.",
	"MALACHIAS ON KUOLLUT.",
	"SIN�K� SE OLET, VELI WILLIAM... TULE SIS��N, ODOTIN SINUA. OTA T�M�, SE ON PALKKIOSI.",
	"LANKESIT ANSAAN JA KUOLEMA ON OLEVA LOPULLINEN PALKKIOSI VELI WILLIAM.",
	"KUNNIOITETTU JORGE, ETTE VOI N�HD� MESTARINI K�YTT�V�N HANSIKKAITA. EROTTAAKSEEN SIVUT TOISISTAAN H�NEN TULISI KOSTUTTAA SORMENP��NS� KIELELL��N KUNNES KIRJASTA OLISI V�LITTYNYT TARPEEKSI MYRKKY�.",
	"MESTARINI, H�N SY� KIRJAN SIVUJA",
	"TEID�N T�YTYY L�HTE� LUOSTARISTA.",
	"OUTOA VELI WILLIAM. BERENGARILLA OLI TUMMIA L�IKKI� KIELESS��N JA SORMENP�ISS��N.",
	"MESTARINI, AAMU KOITTAA PIAN.",
	"LAMPUN VALO ON HIIPUMASSA.",
	"OLETTE ASTUNUT SIS�LLE KAMMIOONI",
	"LAMPUN TULI ON SAMMUNUT.",
	"EMME TULE IKIN� P��SEM��N T��LT� ULOS.",
	"VELI, ODOTA",
	"VELI WILLIAM, OTTAKAA PAIKKANNE",
	"SE ON ARISTOTELEEN COENA CYPRIANI. NYT YMM�RR�TTE MIKSI MINUN PITI SUOJELLA SIT�. "
	"JOKAINEN TUON FILOSOFIN KIRJOITTAMA SANA ON TUHONNUT KRISTIKUNNAN KER��M�� TIETOA. TIED�N TOIMINEENI JUMALAN ARMOSSA. LUE VAIN VELI WILLIAM, SELAILE KIRJAA. OLET ANSAINNUT SEN. N�YT�N SEN VIEL� SINULLEKIN, NOVIISI.",
	"SE OLI HYV� IDEA, EIK� OLLUTKIN? MUTTA NYT ON LIIAN MY�H�IST�.",
	"HALUAN TAVATA LUOSTARIN VANHIMMAN JA VIISAIMMAN MIEHEN.",
	"KUNNIOITETTU JORGE, MUNKKI EDESS�NNE ON VELI WILLIAM, JOKA ON VIERAANAMME.",
	"OLE TERVETULLUT KUNNIOITETTU VELI JA KUUNTELE KERTOMUSTANI. ANTIKRISTUS TOIMII HITAASTI JA KIERTELEM�LL�. H�N TULEE SILLOIN KUN SIT� V�HITEN ODOTAMME. �L� TUHLAA VIIMEISI� P�IVI� ENNEN ANTIKRISTUSTA.",
	"OLEN PAHOILLANI KUNNIOITETTU VELI, MUTTA ETTE VOI MENN� KIRJASTOON.",
	"JOS SE ON TAHTONNE, BERENGAR N�YTT�� TEILLE KIRJOITUSSALIN.",
	"L�NTISEN MAAILMAN PARHAAT KOPISTIT TY�SKENTELEV�T T��LL�.",
	"VENANTIUS TY�SKENTELI T��LL�.",
	"KUNNIOITETTU VELI, OLEN SEVERINUS JA VASTUUSSA SAIRASTUVASTA. LUOSTARISSA ON TAPAHTUNUT HYVIN OUTOJA ASIOITA. JOKU EI HALUA MUNKKIEN P��TT�V�N ITSE TIEDONJANONSA RAJOISTA.",
	" "
		}, // Fin textos 6 Fines
		{  // 7 Portugues
	"SECRETUM FINIS AFRICAE, MANUS SUPRA AAA IDOLUM AGE PRIMUM ET SEPTIMUM DE QUATUOR",
	"BEM-VINDO A ESTA ABADIA, IRM�O. ROGO-VOS QUE ME SIGAIS. ACONTECEU ALGO TERR�VEL.",
	"TEMO QUE UM DOS MONGES TENHA COMETIDO UM CRIME. ROGO-VOS QUE O ENCONTREIS ANTES QUE CHEGUE BERNARDO GUI, POIS N�O DESEJO QUE SE MANCHE O NOME DESTA ABADIA",
	"DEVEIS RESPEITAR AS MINHAS ORDENS E AS DA ABADIA. ASSISTIR AOS OF�CIOS E �S REFEI��ES. DE NOITE DEVEREIS ESTAR NA VOSSA CELA",
	"DEIXAI O MANUSCRITO DE VEN�NCIO OU ADVERTIREI O ABADE",
	"DAI-ME O MANUSCRITO, FREI GUILHERME",
	"CHEGAIS TARDE, FREI GUILHERME",
	"ESTA � A VOSSA CELA. DEVO IR-ME",
	"ORDENO-VOS QUE VENHAIS",
	"DEVEIS ABANDONAR O ED�FICIO, IRM�O",
	"ADVERTIREI O ABADE",
	"DEVEMOS IR � IGREJA, MESTRE",
	"DEVEMOS IR AO REFEIT�RIO, MESTRE",
	"PODEIS IR PARA AS VOSSAS CELAS",
	"N�O HAVEIS RESPEITADO AS MINHAS ORDENS. ABANDONAI PARA SEMPRE ESTA ABADIA.",
	"ESCUTAI IRM�O, ENCONTREI UM ESTRANHO LIVRO NA MINHA CELA",
	"ENTRAI EM VOSSA CELA, FREI GUILHERME",
	"CHEGOU BERNARDO, DEVEIS ABANDONAR A INVESTIGA��O",
	"DORMIMOS, MESTRE?",
	"DEVEMOS ENCONTRAR UMA L�MPADA, MESTRE",
	"VINDE AQUI, FREI GUILHERME",
	"IRM�OS, VEN�NCIO FOI ASSASSINADO.",
	"DEVEIS SABER QUE A BIBLIOTECA � UM LUGAR SECRETO. S� MALAQUIAS PODE ENTRAR. PODEIS IR-VOS.",
	"OREMOS",
	"IRM�OS, BERENG�RIO DESAPARECEU. TEMO QUE SE HAJA COMETIDO OUTRO CRIME",
	"PODEIS COMER, IRM�OS",
	"IRM�OS, ENCONTRARAM BERENG�RIO ASSASSINADO",
	"VINDE, FREI GUILHERME, DEVEMOS ENCONTRAR SEVERINO",
	"SANTO DEUS... ASSASSINARAM SEVERINO E O H�O ENCERRADO",
	"BERNARDO ABANDONAR� HOJE A ABADIA",
	"AMANH�, ABANDONAREIS A ABADIA",
	"ERA VERDADE, TINHA O PODER DE MIL ESCORPI�ES",
	"MALAQUIAS EST� MORTO",
	"SOIS V�S, GUILHERME... PASSAI, ESTAVA-VOS ESPERANDO. TOMAI, AQUI EST� O VOSSO PR�MIO",
	"ESTAIS MORTO, FREI GUILHERME. HAVEIS CA�DO NA ARMADILHA.",
	"VENER�VEL JORGE, VOS N�O PODEIS V�-LO, MAS O MEU MESTRE CAL�A LUVAS. PARA SEPARAR OS F�LIOS TINHA QUE HUMEDECER OS DEDOS NA L�NGUA, AT� QUE TIVESSE RECEBIDO SUFICIENTE VENENO",
	"EST� A COMER O LIVRO, MESTRE",
	"DEVEIS ABANDONAR A ABADIA",
	"� MUITO ESTRANHO, IRM�O GUILHERME. BERENG�RIO TINHA MANCHAS NEGRAS NA L�NGUA E NOS DEDOS",
	"EM BREVE AMANHECER�, MESTRE",
	"A L�MPADA ESGOTA-SE",
	"HAVEIS ENTRADO NA MINHA CELA",
	"ESGOTOU-SE A L�MPADA",
	"JAMAIS CONSEGUIREMOS SAIR DAQUI",
	"ESPERAI, IRM�O",
	"OCUPAI O VOSSO S�TIO, FREI GUILHERME",
	"� O COENA CIPRIANI DE ARIST�TELES. AGORA COMPREENDEREIS POR QUE TINHA QUE PROTEG�-LO. CADA PALAVRA ESCRITA "
	"PELO FILOSOFO DESTRUIU UMA PARTE DO SABER DA CRISTANDADE. SEI QUE ACTUEI SEGUINDO A VONTADE DO SENHOR... LEDE-O POIS, FREI GUILHERME. DEPOIS MOSTR�LO-EI A TI RAPAZ.",
	"FOI UMA BOA IDEIA VERDADE?; MAS J� � TARDE",
	"QUERO QUE CONHE�AIS O HOMEM MAIS VELHO E MAIS S�BIO DA ABADIA",
	"VENER�VEL JORGE, QUEM EST� ANTE V�S � FREI GUILHERME, NOSSO H�SPEDE",
	"SEDE BEM-VINDO, VENER�VEL IRM�O; E ESCUTAI O QUE VOS DIGO. AS VIAS DO ANTICRISTO S�O LENTAS E TORTUOSAS. CHEGA QUANDO MENOS O ESPERAS. N�O DESPERDICEIS OS �LTIMOS DIAS",
	"LAMENTO, VENER�VEL IRM�O, N�O PODEIS SUBIR � BIBLIOTECA",
	"SE O DESEJAIS, BERENG�RIO MOSTRAR-VOS-� O SCRIPTORIUM",
	"AQUI TRABALHAM OS MELHORES COPISTAS DO OCIDENTE",
	"AQUI TRABALHAVA VEN�NCIO",
	"VENER�VEL IRM�O, SOU SEVERINO, O ENCARREGADO DO HOSPITAL. QUERO ADVERTIR-VOS QUE NESTA ABADIA SUCEDEM COISAS MUITO ESTRANHAS. ALGU�M N�O QUER QUE OS MONGES DECIDAM POR SI PR�PRIOS O QUE DEVEM SABER",
	" "
		}, // Fin textos 7 Portugues
};

/////////////////////////////////////////////////////////////////////////////
// inicializaci�n y limpieza
/////////////////////////////////////////////////////////////////////////////

GestorFrases::GestorFrases()
{
	cpc6128 = elJuego->cpc6128;
	contadorActualizacion = 0;
	reproduciendoFrase = mostrandoFrase = false;
	frasePergamino = frases[0][0]; // 0 castellano
}

GestorFrases::~GestorFrases()
{
}

/////////////////////////////////////////////////////////////////////////////
// m�todos para mostrar una frase
/////////////////////////////////////////////////////////////////////////////

// muestra una frase por el marcador siempre y cuando no hubiera otra puesta
void GestorFrases::muestraFrase(int numFrase)
{
	// si ya est� reproduciendo una frase, sale
	if (mostrandoFrase){
		return;
	}

	// prepara todo para que se muestre la frase
	dibujaFrase(numFrase);
}

// muestra una frase por el marcador. Si hab�a otra, la para
void GestorFrases::muestraFraseYa(int numFrase)
{
	// para la frase actual
	reproduciendoFrase = mostrandoFrase = false;

	// limpia la parte del marcador donde se muestran las frases 
	elJuego->marcador->limpiaAreaFrases();

	// prepara todo para que se muestre la frase
	dibujaFrase(numFrase);
}

// actualiza el estado de la reproducci�n de las frases
void GestorFrases::actualizaEstado()
{
#ifdef __abadIA__
procesaFraseActual();
#endif
	mostrandoFrase = reproduciendoFrase;
}

/////////////////////////////////////////////////////////////////////////////
// dibujo de la frase
/////////////////////////////////////////////////////////////////////////////

// inicia el proceso para mostrar una frase por el marcador 
void GestorFrases::dibujaFrase(int numFrase)
{
#ifdef __abadIA__
fprintf(stderr,"GestorFrases::dibujaFrase %d\n",numFrase);
	elJuego->frases.push(numFrase);
#endif
	// inicia la frase
	fraseTerminada = false;
	reproduciendoFrase = mostrandoFrase = true;

	// guarda un puntero a la frase que se va a mostrar
	frase = frases[elJuego->idioma][numFrase]; // 1 ingles ... 7 portugues

	// si se va a mostrar la frase del pergamino, cambia el puntero ya que en C++ no se puede modificar un static char *
	if (numFrase == 0){
		frase = (char *)frasePergamino.c_str();
	}

	// indica que a�n no se ha terminado la frase
	espaciosParaFin = 0;
}


void GestorFrases::procesaFraseActual()
{
//fprintf(stderr,"GestorFrases::procesaFraseActual contadorActualizacion %d\n",contadorActualizacion);
#ifndef __abadIA__
	contadorActualizacion++;

	// s�lo actualiza las frases 1 vez cada 45 llamadas
	if (contadorActualizacion != 45){
		return;
	} else {
		contadorActualizacion = 0;
	}
#endif

	// si no se est� mostrando una frase en el marcador, sale
	if (!reproduciendoFrase){
		return;
	}
	
	// si no se ha terminado la frase actual, muestra otro caracter en el marcador
	if (!fraseTerminada){
		int caracter = *frase;

		frase++;

		if (*frase == 0){
			fraseTerminada = true;
			espaciosParaFin = 17;
		}

		// realiza el scroll de la frase que se muestra en el marcador e imprime el nuevo car�cter
		scrollFrase();
		// CPC elJuego->marcador->imprimirCaracter(caracter, 216, 164, 2, 3);
		elJuego->marcador->imprimirCaracter(caracter, 216, 164, 4, 0);
	} else if (espaciosParaFin != 0){
		// si la frase se ha terminado y solo se est�n poniendo espacios para que se borre del marcador
		espaciosParaFin--;

		if (espaciosParaFin != 0){
			// si el marcador est� limpi�ndose, realiza el scroll y muestra espacios en blanco
			scrollFrase();
			// CPC elJuego->marcador->imprimirCaracter(0x20, 216, 164, 2, 3);
			elJuego->marcador->imprimirCaracter(0x20, 216, 164, 4, 0); // VGA
		} else {
			// si llega aqu�, la frase ha terminado
			reproduciendoFrase = false;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////
// m�todos de ayuda
/////////////////////////////////////////////////////////////////////////////

void GestorFrases::scrollFrase()
{
	// 8 l�neas de alto
	//for (int j = 0; j < 8; j++){
	// con las traducciones hay nuevos caracteres que son de 8x10 en vez de 8x8
	// al tener que pintar el acento encima
	// 10 l�neas de alto
	for (int j = -2; j < 8; j++){
		// desplaza 120/8 = 15 caracteres a la izquierda 1 caracter (cada caracter es de 8x8)
		for (int i = 0; i < 120; i++){
			cpc6128->setMode1Pixel(104 + i - 8, 164 + j, cpc6128->getMode1Pixel(104 + i, 164 + j));
		}
	}
}
