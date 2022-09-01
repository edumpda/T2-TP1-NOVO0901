#include "testes.h"

// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe de teste de unidade.


//TESTE UNIDADE NOME

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE EMAIL
void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE SENHA
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE IDIOMA
void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setValor(VALOR_VALIDO);
        if (idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE ANIVERSARIO
void TUAniversario::setUp(){
    aniversario = new Aniversario();
    estado = SUCESSO;
}

void TUAniversario::tearDown(){
    delete aniversario;
}

void TUAniversario::testarCenarioSucesso(){
    try{
        aniversario->setValor(VALOR_VALIDO);
        if (aniversario->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUAniversario::testarCenarioFalha(){
    try{
        aniversario->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (aniversario->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUAniversario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE DESCRICAO
void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setValor(VALOR_VALIDO);
        if (descricao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE CODIGO
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//TESTE UNIDADE PAIS
void TUPais::setUp(){
    pais = new Pais();
    estado = SUCESSO;
}

void TUPais::tearDown(){
    delete pais;
}

void TUPais::testarCenarioSucesso(){
    try{
        pais->setValor(VALOR_VALIDO);
        if (pais->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUPais::testarCenarioFalha() {
    try {
        pais->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (pais->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUPais::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE CITY
void TUCity::setUp(){
    city = new City();
    estado = SUCESSO;
}

void TUCity::tearDown(){
    delete city;
}

void TUCity::testarCenarioSucesso(){
    try{
        city->setValor(VALOR_VALIDO);
        if (city->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCity::testarCenarioFalha() {
    try {
        city->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (city->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCity::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE NOTA
void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;
}

void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha() {
    try {
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE Descricao_Hosp
void TUDescricao_hosp::setUp(){
    descricao_hosp = new Descricao_hosp();
    estado = SUCESSO;
}

void TUDescricao_hosp::tearDown(){
    delete descricao_hosp;
}

void TUDescricao_hosp::testarCenarioSucesso(){
    try{
        descricao_hosp->setValor(VALOR_VALIDO);
        if (descricao_hosp->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao_hosp::testarCenarioFalha() {
    try {
        descricao_hosp->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (descricao_hosp->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao_hosp::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//TESTE UNIDADE Codigo_Ava
void TUCodigo_ava::setUp(){
    codigo_ava = new Codigo_ava();
    estado = SUCESSO;
}

void TUCodigo_ava::tearDown(){
    delete codigo_ava;
}

void TUCodigo_ava::testarCenarioSucesso(){
    try{
        codigo_ava->setValor(VALOR_VALIDO);
        if (codigo_ava->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo_ava::testarCenarioFalha() {
    try {
        codigo_ava->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (codigo_ava->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo_ava::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//TESTE UNIDADE NOTA_AVA
void TUNota_ava::setUp(){
    nota_ava = new Nota_ava();
    estado = SUCESSO;
}

void TUNota_ava::tearDown(){
    delete nota_ava;
}

void TUNota_ava::testarCenarioSucesso(){
    try{
        nota_ava->setValor(VALOR_VALIDO);
        if (nota_ava->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota_ava::testarCenarioFalha() {
    try {
        nota_ava->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (nota_ava->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota_ava::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//TESTE UNIDADE Descricao_ava
void TUDescricao_ava::setUp(){
    descricao_ava = new Descricao_ava();
    estado = SUCESSO;
}

void TUDescricao_ava::tearDown(){
    delete descricao_ava;
}

void TUDescricao_ava::testarCenarioSucesso(){
    try{
        descricao_ava->setValor(VALOR_VALIDO);
        if (descricao_ava->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao_ava::testarCenarioFalha() {
    try {
        descricao_ava->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
        if (descricao_ava->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao_ava::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// Implementa��es de m�todos de classe de teste de unidade.

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setValor("Thiago Calegario");
    usuario->setNome(nome);
    if(usuario->getNome().getValor() != "Thiago Calegario")
        estado = FALHA;

    Email email;
    email.setValor("thiagocalegario@gmail.com");
    usuario->setEmail(email);
    if(usuario->getEmail().getValor() != "thiagocalegario@gmail.com")
        estado = FALHA;

    Senha senha;
    senha.setValor("T!7hc");
    usuario->setSenha(senha);
    if(usuario->getSenha().getValor() != "T!7hc")
        estado = FALHA;

    Idioma idioma;
    idioma.setValor("Ingles");
    usuario->setIdioma(idioma);
    if(usuario->getIdioma().getValor() != "Ingles")
        estado = FALHA;

    Aniversario aniversario;
    aniversario.setValor(VALOR_VALIDO);
    usuario->setAniversario(aniversario);
    if(usuario->getAniversario().getValor() != VALOR_VALIDO)
        estado = FALHA;

    Descricao descricao;
    descricao.setValor("descricao valida");
    usuario->setDescricao(descricao);
    if(usuario->getDescricao().getValor() != "descricao valida")
        estado = FALHA;
}
int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}



int TUHospedagem::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor("79927398713");
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getValor() != "79927398713")
        estado = FALHA;
    Pais pais;
    pais.setValor("Brazil");
    hospedagem->setPais(pais);
    if(hospedagem->getPais().getValor() != "Brazil")
        estado = FALHA;

    City  city;
    city.setValor("Toquio");
    hospedagem->setCity(city);
    if(hospedagem->getCity().getValor() != "Toquio")
        estado = FALHA;
    Nota  nota;
    nota.setValor("10");
    hospedagem->setNota(nota);
    if(hospedagem->getNota().getValor() != "10")
        estado = FALHA;

    Descricao_hosp descricaoHosp;
    descricaoHosp.setValor("descricao valida");
    hospedagem->setDescricao_hosp(descricaoHosp);
    if(hospedagem->getDescricao_hosp().getValor() != "descricao valida")
        estado = FALHA;
}


void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){
    Codigo_ava codigo_ava;
    codigo_ava.setValor("79927398713");
    avaliacao->setCodigo_ava(codigo_ava);
    if(avaliacao->getCodigo_ava().getValor() != "79927398713")
        estado = FALHA;
    Nota_ava nota_ava;
    nota_ava.setValor("10");
    avaliacao->setNota_ava(nota_ava);
    if(avaliacao->getNota_ava().getValor() != "10")
        estado = FALHA;
    Descricao_ava descricao_ava;
    descricao_ava.setValor("descricao valida");
    avaliacao->setDescricao_ava(descricao_ava);
    if(avaliacao->getDescricao_ava().getValor() != "descricao valida")
        estado = FALHA;

}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}