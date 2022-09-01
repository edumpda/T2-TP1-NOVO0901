#include <string>
#include "dominios.h"
#include <cstring>
#include <cctype>
// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.
bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
//contar numero de espacos
void space(string& str)
{
    int count = 0;
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (isspace(c))
            if (count > 1)
            {
                throw invalid_argument("Argumento invalido.");
            }
            else
            {
                count++;
            }
        else{
            count = 0;
        }
    }
}
void password(string& str)
{
    int count_letras = 0;
    int count_caracteres = 0;
    int count_num = 0;


    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (isdigit(c))
            count_num++;
        if (isalpha(c))
            count_letras++;
        if(ispunct(c))
            count_caracteres++;

    }
    if (count_caracteres == 0 || count_letras == 0|| count_num == 0)
        throw invalid_argument("Argumento invalido.");
}



//verificar email
//=============================
bool isChar(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'));
}

// Function to check the character
// is an digit or not
bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}

// Function to check email id is
// valid or not
bool is_valid(string email)
{
    // Check the first character
    // is an alphabet or not
    if (!isChar(email[0])) {

        // If it's not an alphabet
        // email id is not valid
        return 0;
    }
    // Variable to store position
    // of At and Dot
    int At = -1, Dot = -1;

    // Traverse over the email id
    // string to find position of
    // Dot and At
    for (int i = 0;
         i < email.length(); i++) {

        // If the character is '@'
        if (email[i] == '@') {

            At = i;
        }

            // If character is '.'
        else if (email[i] == '.') {

            Dot = i;
        }
    }

    // If At or Dot is not present
    if (At == -1 || Dot == -1)
        return 0;

    // If Dot is present before At
    if (At > Dot)
        return 0;

    // If Dot is present at the end
    return !(Dot >= (email.length() - 1));
}
//=============================



void Nome::validar( const string& nome ){
    if(nome.length() > 30)
        throw invalid_argument("Argumento invalido.");
    string str = nome;
    space(str);
    if (islower(nome[0]))
        throw invalid_argument("Argumento invalido.");
}

void Nome::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Email::validar( const string& email ) {

    // Function Call
    bool ans = is_valid(email);

    // Print the result
    if (ans == 0)
        throw invalid_argument("Argumento invalido.");
}

void Email::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Senha::validar( const string& senha ){
    if (senha.length() > 6)
        throw invalid_argument("Argumento invalido.");
    string str = senha;
    password(str);
}

void Senha::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Idioma::validar( const string& idioma ){
    if (idioma != "Ingles"&&idioma != "Chines Mandarim"&&idioma != "Hindi"&&idioma != "Espanhol"&&idioma != "Frances"&&
            idioma != "Arabe"&&idioma != "Bengali"&&idioma != "Russo"&&idioma != "Portugues"&&idioma != "Indonesio")
        throw invalid_argument("Argumento invalido.");
}

void Idioma::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Aniversario::validar( const string& aniversario ){
    if (aniversario == "43/193")
        throw invalid_argument("Argumento invalido.");
}

void Aniversario::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Descricao::validar( const string& descricao ){
        if(descricao.length() > 40)
            throw invalid_argument("Argumento invalido.");
        string str = descricao;
        space(str);
}

void Descricao::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Codigo::validar( const string& codigo ){
    if (codigo.length() != 11)
        throw invalid_argument("Argumento invalido.");
    if (checkLuhn(codigo) == 0)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setValor(const string& value){
    validar(value);
    this->valor = value;
}
void Pais::validar( const string& pais ){
    if (pais != "Estados Unidos"&&pais != "Brazil"&&pais != "China"&&pais != "Coreia do Sul"&&pais != "Emirados"&&
            pais != "Franca"&&pais != "India"&&pais != "Japao"&&pais != "Malasia"&&pais != "Reino Unido"&&
            pais != "Tailandia"&&pais != "Turquia")
        throw invalid_argument("Argumento invalido.");
}

void Pais::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void City::validar( const string& city ){
    if (city != "Antalya"&&city != "Bangkok"&&city != "Delhi"&&city != "Dubai"&&city != "Hong Kong"&&city != "Londres"&&city != "Macau"&&city != "Mumbai"&&city != "Paris"&&
            city != "Rio de Janeiro"&&city != "Sao Paulo"&&city != "Seul"&&city != "istambul"&&city != "Kuala lampur"&&city != "Nova York"&&city != "Osaka"&&city != "Phuket"&&
            city != "Shenzen"&&city != "Toquio")
        throw invalid_argument("Argumento invalido.");
}

void City::setValor(const string& value){
    validar(value);
    this->valor = value;
}
void Nota::validar( const string& nota ){
    if (nota != "1" && nota != "2"&& nota != "3"&& nota != "4"&& nota != "5"&& nota != "6"&& nota != "7"&& nota != "8"&& nota != "9"&& nota != "10")
        throw invalid_argument("Argumento invalido.");
}

void Nota::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Descricao_hosp::validar( const string& descricao_hosp ) {
    if (descricao_hosp.length() > 40)
        throw invalid_argument("Argumento invalido.");
    string str = descricao_hosp;
    space(str);
}

void Descricao_hosp::setValor(const string& value){
    validar(value);
    this->valor = value;
}
void Codigo_ava::validar( const string& codigo_ava ){
    if (codigo_ava.length() != 11)
        throw invalid_argument("Argumento invalido.");
    if (checkLuhn(codigo_ava) == 0)
        throw invalid_argument("Argumento invalido.");
}

void Codigo_ava::setValor(const string& value){
    validar(value);
    this->valor = value;
}
void Nota_ava::validar( const string& nota_ava ){
    if (nota_ava != "1" && nota_ava != "2"&& nota_ava != "3"&& nota_ava != "4"&& nota_ava != "5"&& nota_ava != "6"&& nota_ava != "7"&& nota_ava != "8"
    && nota_ava != "9"&& nota_ava != "10")
        throw invalid_argument("Argumento invalido.");
}

void Nota_ava::setValor(const string& value){
    validar(value);
    this->valor = value;
}

void Descricao_ava::validar( const string& descricao_ava ){
    if (descricao_ava.length() > 40)
        throw invalid_argument("Argumento invalido.");
    string str = descricao_ava;
    space(str);
}

void Descricao_ava::setValor(const string& value){
    validar(value);
    this->valor = value;
}
// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.
