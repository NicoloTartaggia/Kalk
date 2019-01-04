#ifndef INFO_H
#define INFO_H
#include<QGroupBox>
#include<QHBoxLayout>

class Info: public QGroupBox{
private:
    QGroupBox* nomeTeam, *nomeAll;
public:
    Info();
    QGroupBox* getNomeTeam() const;
    QGroupBox* getNomeAll() const;
    void setNomeTeam(QWidget*);
    void setNomeAll(QWidget*);
    void resetInfo();
    void resetTeam();
    void resetAll();
};

#endif // INFO_H
