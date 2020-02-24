#ifndef POLINOMIAL_HPP
#define POLINOMIAL_HPP

#include "flint/fmpz_polyxx.h"
#include "flint/fmpz_poly_factorxx.h"
#include <QTextEdit>


class polinomial : public QTextEdit
{
    Q_OBJECT
public:
    explicit polinomial(QWidget* parent = nullptr);

private:
    flint::fmpz_poly_factorxx* fac;

signals:

public slots:
    void check(const QString& s);
};

#endif // POLINOMIAL_HPP
