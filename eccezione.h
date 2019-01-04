#ifndef ECCEZIONE_H
#define ECCEZIONE_H
#include<string>

class Eccezione{
private:
    std::string err;
public:
    Eccezione(std::string);
    std::string getError() const;
};


#endif // ECCEZIONE_H
