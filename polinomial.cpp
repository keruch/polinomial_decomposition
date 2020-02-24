#include "polinomial.hpp"

polinomial::polinomial(QWidget* parent) : QTextEdit{parent}
{
    setText("");
}

void polinomial::check(const QString& s)
{
    flint::fmpz_polyxx poly;
    poly.set(s.toStdString().c_str());

    fac = new flint::fmpz_poly_factorxx();
    fac->set_factor_zassenhaus(poly);

    if (poly.degree() <= 1)
        setText("Degree must be >= 2!\n");
    else {
        QString str;
        for (int i = 0; i < fac->size(); ++i) {
            str += QString::fromStdString(fac->p(i).to_string()) + " ^ " + QString::number(fac->exp(i)) + '\n';
        }
        setText(str);
    }
}
