//// Code Author: Jamie Adaway (with thanks to Jakob Frederikson

//#include "filesystem.h"

//FS::Filesystem() // This function is basically used as an initialisation for the Filesystem
//{
//    catalogueFile.setFileName("qrc:/res/res/libsys-cataloguedata.csv");
//    userFile.setFileName("qrc:/res/res/libsys-userdata.csv");
//    userCheckedOutFile.setFileName("qrc:/res/res/libsys-usercheckedoutdata.csv");
//    userReservedFile.setFileName("qrc:/res/res/libsys-userreserveddata.csv");
//};


//// ====== GENERAL FS FUNCTIONS ======
//QStringList FS::loadCatalogueData()
//{
//    catalogueFile.open(QIODevice::ReadOnly);
//    QStringList splitList;
//    QTextStream instream(&catalogueFile);

//    while(!instream.atEnd())
//    {
//        QString lineIn = instream.readLine();
//        splitList.append(lineIn.split(",,"));
//    }

//    return splitList;
//}

//QStringList FS::loadUserData()
//{
//    userFile.open(QIODevice::ReadOnly);
//    QStringList splitList;
//    QTextStream instream(&userFile);

//    while(!instream.atEnd())
//    {
//        QString lineIn = userFile.readLine();
//        splitList.append(lineIn.split(",,"));
//    }

//    return splitList;
//}

//QStringList FS::loadUserCheckedOutData()
//{
//    userCheckedOutFile.open(QIODevice::ReadOnly);
//    QStringList splitList;
//    QTextStream instream(&userCheckedOutFile);

//    while(!instream.atEnd())
//    {
//        QString lineIn = userCheckedOutFile.readLine();
//        splitList.append(lineIn.split(",,"));
//    }

//    return splitList;
//}

//QStringList FS::loadUserReservedData()
//{
//    userReservedFile.open(QIODevice::ReadOnly);
//    QStringList splitList;
//    QTextStream instream(&userReservedFile);

//    while(!instream.atEnd())
//    {
//        QString lineIn = userReservedFile.readLine();
//        splitList.append(lineIn.split(",,"));
//    }

//    return splitList;
//}
//// ==================================

//// ======= USER FS FUNCTIONS ========

///* USER STORAGE DATA STRUCTURE
// * USER_ID, USER_FIRSTNAME, USER_LASTNAME, USER_PASSWORD, USER_EMAIL, USER_PHONENUMBER, USER_PROFILEIMG, USER_ADMINFLAG
// * Each of these will be seperated by double commas ",," to allow for compatability with the catalogue storage */

//void FS::AddUser(QString user_ID, QString user_FirstName, QString user_LastName, QString user_Password, QString user_Email, QString user_PhoneNum, QString user_ProfImg, QString user_AdminFlag)
//{
//    if(userFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
//    {
//        QTextStream out(&userFile);
//        out << user_ID << ",," << user_FirstName << ",," << user_LastName << ",," << user_Password << ",," << user_Email << ",," << user_PhoneNum << ",," << user_ProfImg << user_AdminFlag << "\n";
//    }
//    else
//    {
//        QMessageBox::warning(NULL, "FS ERROR: Failed to open User File. Please try again later.", userFile.errorString());
//    }

//    userFile.close();
//}

//void FS::ModifyUser(QStringList userData, QString userID)
//{
//    if(userData.contains(userID))
//    {
//        //userData
//    }
//}

//void FS::DeleteUser(QString user_ID)
//{

//}
//// ==================================

//// ======= BOOK FS FUNCTIONS ========

///* BOOK STORAGE DATA STRUCTURE
// * BOOK_ID, BOOK_TITLE, BOOK_AUTHOR, BOOK_ISBN, BOOK_GENRE1, BOOK_GENRE2, BOOK_IMG
// * Each of these will be seperated by double commas ",," to allow for a description of each book to include a comma */

//void FS::CheckoutBook(QString book_ID, QString book_Title, QString user_ID, QString user_FirstName, QString user_LastName, QString dueDate)
//{

//}

//void FS::ReserveBook(QString book_ID, QString book_Name, QString user_ID, QString user_FirstName, QString user_LastName, QString dueDate, QString reserveDate)
//{

//}

//void FS::AddBook(QString book_ID, QString book_Title, QString book_Author, QString book_ISBN, QString book_Genre1, QString book_Genre2, QString book_Img)
//{
//    if(catalogueFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
//    {
//        QTextStream out(&catalogueFile);
//        out << book_ID << ",," << book_Title << ",," << book_Author << ",," << book_ISBN << ",," << book_Genre1 << ",," << book_Genre2 << ",," << book_Img << "\n";
//    }
//    else
//    {
//        QMessageBox::warning(NULL, "FS ERROR: Failed to open Catalogue File. Please try again later.", catalogueFile.errorString());
//    }

//    catalogueFile.close();
//}

//void FS::ModifyBook(QStringList bookData)
//{

//}

//void FS::DeleteBook(QString book_ID)
//{

//}
