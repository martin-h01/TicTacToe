#ifndef SPIELFENSTER_H
#define SPIELFENSTER_H

#include <QDialog>
#include <QLabel>
namespace Ui {
class SpielFenster;
}

class SpielFenster : public QDialog
{
    Q_OBJECT

public:
    explicit SpielFenster(QWidget *parent = nullptr);
    ~SpielFenster();

private slots:
void load_field(void);


private:
    Ui::SpielFenster *ui;
    QString m_path="C:/Users/Martin/Documents/QT_Projects/TicTacToe_PreAlpha/";
    QString m_field_icon_path = m_path + "Field_Icon.png";

    QLabel *m_field0_0;
    QLabel *m_field0_1;
    QLabel *m_field0_2;
    QLabel *m_field1_0;
    QLabel *m_field1_1;
    QLabel *m_field1_2;
    QLabel *m_field2_0;
    QLabel *m_field2_1;
    QLabel *m_field2_2;

};

#endif // SPIELFENSTER_H
