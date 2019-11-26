#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>
#include "spielfenster.h"
QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToe; }
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();


private slots:

//bt_Play -> SpielFenster öffnen
void on_bt_Play_clicked();


private:
    Ui::TicTacToe *ui;
    SpielFenster *spielfenster;



};
#endif // TICTACTOE_H
