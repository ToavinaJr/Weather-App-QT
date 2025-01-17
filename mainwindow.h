#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMainWindow>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    bool on_btn_go_clicked();

private:
    Ui::MainWindow *ui;

    void getCountryList();
    void populateComboCountry();
    void onWeatherDataReceived();

    QStringList countryListWithCode;
    QNetworkAccessManager *netManager;
    QNetworkReply *reply;
};
#endif // MAINWINDOW_H
