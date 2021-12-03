#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
};



class Filesystem
{
public:
    // File Locations
    static QFile catalogueFile;
    static QFile userFile;
    static QFile userCheckedOutFile;
    static QFile userReservedFile;


    // ===== GENERAL FS FUNCTIONS =====
    static QStringList loadCatalogueData();                                                         // IMPLEMENTED, NOT TESTED
    static QStringList loadUserData();                                                              // IMPLEMENTED, NOT TESTED
    static QStringList loadUserCheckedOutData();                                                    // IMPLEMENTED, NOT TESTED
    static QStringList loadUserReservedData();                                                      // IMPLEMENTED, NOT TESTED
    // ================================

    // ====== USER FS FUNCTIONS =======
    static void AddUser(QString, QString, QString, QString, QString, QString, QString, QString);     // IMPLEMENTED, NOT TESTED
    static void ModifyUser(QStringList, QString);                                                    // IMPLEMENTED, NOT TESTED
    static void DeleteUser(QStringList, QString);                                                    // IMPLEMENTED, NOT TESTED
    // ================================

    // ====== BOOK FS FUNCTIONS =======
    static void CheckoutBook(QString, QString, QString, QString, QString, QString);                  // IMPLEMENTED, NOT TESTED
    static void ReserveBook(QString, QString, QString, QString, QString, QString, QString);          // IMPLEMENTED, NOT TESTED
    static void AddBook(QString, QString, QString, QString, QString, QString, QString);              // IMPLEMENTED, NOT TESTED
    static void ModifyBook(QStringList, QString);                                                    // IMPLEMENTED, NOT TESTED
    static void DeleteBook(QStringList, QString);                                                    // IMPLEMENTED, NOT TESTED
    // ================================

};

#endif // DIALOG_H
