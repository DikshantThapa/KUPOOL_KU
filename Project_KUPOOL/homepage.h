#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = nullptr);
    ~homepage();

private slots:
    void on_show_graph_btn_clicked();

    void on_export_csv_btn_clicked();

    void on_signout_button_clicked();

    void on_History_clicked();

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
