 #include<eccezione.h>
#include<iostream>

Eccezione::Eccezione(std::string s) : err(s) {}

std::string Eccezione::getError() const{return err;}
