#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QMessageBox>

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
}

TicTacToe::~TicTacToe()
{
    delete ui;
}



//bt_Play -> SpielFenster öffnen
void TicTacToe::on_bt_Play_clicked()
{
    hide();
    spielfenster = new SpielFenster(this);
    spielfenster->show();
}
