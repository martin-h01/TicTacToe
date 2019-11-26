#include "spielfenster.h"
#include "ui_spielfenster.h"

SpielFenster::SpielFenster(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpielFenster)
{
    ui->setupUi(this);

    m_field0_0=ui->field0_0=new QLabel();
    m_field0_0->setPixmap(QPixmap("C:/Users/Martin/Documents/QT_Projects/TicTacToe_PreAlpha/Field_Icon.png"));
    m_field0_1=ui->field0_1;
    m_field0_2=ui->field0_2;
    m_field1_0=ui->field1_0;
    m_field1_1=ui->field1_1;
    m_field1_2=ui->field1_2;
    m_field2_0=ui->field2_0;
    m_field2_1=ui->field2_1;
    m_field2_2=ui->field2_2;

}

void SpielFenster::load_field(void)
{
    QLabel *m_field0_0 = new QLabel();
    m_field0_0->setPixmap(QPixmap("C:/Users/Martin/Documents/QT_Projects/TicTacToe_PreAlpha/Field_Icon.png"));





}




SpielFenster::~SpielFenster()
{
    delete ui;
}
