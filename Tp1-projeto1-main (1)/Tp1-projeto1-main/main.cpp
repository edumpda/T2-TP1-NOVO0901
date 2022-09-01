#include <string.h>
#include <stdexcept>
#include <iostream>

#include "entidades.h"
#include "dominios.h"
#include "interfaces.h"
#include "controladorasapresentacao.h"

using namespace std;

int main()
{
    // Declarar poteiros e instanciar controladoras.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoUsuario *cntrApresentacaoUsuario;
    IApresentacaoHospedagem *cntrApresentacaoHospedagem;
    IApresentacaoAvaliacao *cntrApresentacaoAvaliacao;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoUsuario = new CntrApresentacaoUsuario();
    cntrApresentacaoHospedagem = new CntrApresentacaoHospedagem();
    cntrApresentacaoAvaliacao = new CntrApresentacaoAvaliacao();

    // Instanciar serviços.

    IServicoAutenticacao *cntrServicoAutenticacao;
    IServicoUsuario *cntrServicoUsuario;
    IServicoHospedagem *cntrServicoHospedagem;
    IServicoAvaliacao *cntrServicoAvaliacao;

//    cntrServicoUsuario = new CntrServicoUsuario();
//    cntrServicoAutenticacao = new CntrServicoAutenticacao();
//    cntrServicoHospedagem = new CntrServicoHospedagem();

    // Interligar controladoras.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoUsuario(cntrApresentacaoUsuario);
    cntrApresentacaoControle->setCntrApresentacaoHospedagem(cntrApresentacaoHospedagem);
    cntrApresentacaoControle->setCntrApresentacaoAvaliacao(cntrApresentacaoAvaliacao);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoUsuario->setCntrServicoUsuario(cntrServicoUsuario);
    cntrApresentacaoHospedagem->setCntrServicoHospedagem(cntrServicoHospedagem);
    cntrApresentacaoAvaliacao->setCntrServicoHospedagem(cntrServicoHospedagem);

    cntrApresentacaoControle->executar(); // Solicitar servi�o apresentacao.

    return 0;
}