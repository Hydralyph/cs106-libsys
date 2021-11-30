#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

typedef class Filesystem
{
public:
    // File Locations
    static QFile catalogueFile;
    static QFile userFile;
    static QFile userCheckedOutFile;
    static QFile userReservedFile;

    Filesystem();

    // ===== GENERAL FS FUNCTIONS =====
    static QStringList loadCatalogueData();                                                 // IMPLEMENTED, NOT TESTED
    static QStringList loadUserData();                                                      // IMPLEMENTED, NOT TESTED
    static QStringList loadUserCheckedOutData();                                            // IMPLEMENTED, NOT TESTED
    static QStringList loadUserReservedData();                                              // IMPLEMENTED, NOT TESTED
    // ================================

    // ====== USER FS FUNCTIONS =======
    static void AddUser(QString, QString, QString, QString, QString, QString, QString, QString);     // NOT IMPLEMENTED, NOT TESTED
    static void ModifyUser(QStringList);                                                    // NOT IMPLEMENTED, NOT TESTED
    static void DeleteUser(QString);                                                        // NOT IMPLEMENTED, NOT TESTED
    // ================================

    // ====== BOOK FS FUNCTIONS =======
    static void CheckoutBook(QString, QString, QString, QString, QString, QString);         // NOT IMPLEMENTED, NOT TESTED
    static void ReserveBook(QString, QString, QString, QString, QString, QString, QString); // NOT IMPLEMENTED, NOT TESTED
    static void AddBook(QString, QString, QString, QString, QString, QString, QString);     // NOT IMPLEMENTED, NOT TESTED
    static void ModifyBook(QStringList);                                                    // NOT IMPLEMENTED, NOT TESTED
    static void DeleteBook(QString);                                                        // NOT IMPLEMENTED, NOT TESTED
    // ================================

}FS;

#endif // FILESYSTEM_H
