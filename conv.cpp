#include "conv.h"
#include <QGuiApplication>
#include <QClipboard>

Conv::Conv(QObject *parent) : QObject(parent)
{

}

const QString &Conv::convert(int x)
{
    static QString res{};
    res.clear();
    int int_coc = x, dec_mod = 0x0;
    do {
        dec_mod= int_coc%0x10;
        res.push_front(
                    dec_mod < 0xa? QString::number(dec_mod) :
                                   QString::number(dec_mod,0x10));
        int_coc/=0x10;
    }
    while (int_coc !=0x0);
    res.prepend("0x");

    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(res);
    return res;
}
