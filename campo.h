#ifndef CAMPO_H
#define CAMPO_H
#include<QGroupBox>
#include<QLayout>


class Campo: public QGroupBox{
private:
    QGroupBox* qbg;
public:
    Campo();
    QGroupBox* getGB() const;
    void setLayout(QLayout *) const;
    QGroupBox *addToGB(QLayout *);
    void resetCampo();
};

#endif // CAMPO_H
