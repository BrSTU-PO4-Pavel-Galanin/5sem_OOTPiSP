#ifndef GPI_MAINWINDOW_HPP
#define GPI_MAINWINDOW_HPP

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class gpi_MainWindow; }
QT_END_NAMESPACE

class gpi_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    gpi_MainWindow(QWidget *parent = nullptr);
    ~gpi_MainWindow();

private slots:
    void on_gpi_lineEdit_path_textChanged(const QString &arg1);

    void on_gpi_plainTextEdit_file1_textChanged();

private:
    Ui::gpi_MainWindow *ui;
};
#endif // GPI_MAINWINDOW_HPP
