#include "nao_acertou.hpp"
#include <vector>

bool nao_acertou(std::string& palavra_secreta, const std::map<char, bool>& chutou){
    for(char letra : palavra_secreta){
        //Se não encontrar, define chutou[letra] = False, portanto com const na frente precisamos mudar isso
        /** 
            Para entender melhor 
            -Como definimos uma constante no mapa, nós não podemos modificar certo?
            -Então quando declaramos chutou[letra], o C++ automaticamente coloca chutou[letra] = false
            -Então já na condicionao o C++ vai tentar modificar uma constante
            -Por isso fazemos a verificação sem que a mesma seja modificada
        **/
        //if(!chutou[letra]){
        if(chutou.find(letra) == chutou.end() || !chutou.at(letra)){
            return true;
        }
    }
    return false;
}