#include "csvsystem.h"

CSVSystem::CSVSystem()
{

}

void CSVSystem::ReadFromCSV()
{
    QStringList splitList;
    QFile file(":/res/libsys-bookdata.csv");

   file.open(QFile::ReadOnly);

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString s = in.readLine();
        splitList.append(s.split(",,"));
    }
    file.close();
}


Book Book::SetBookData(QString isbn, QString title, QString author, QString genre1, QString genre2, QString type, QString desc, bool hidden)
{
    bool genreMatch = false;

    Book tempBook;
    tempBook.isbn = isbn;
    tempBook.title = title;
    tempBook.author = author;

    // This checks if the genre entered matches a genre in the genreList. Will auto set the genre to N/A if the entered genre does not match any on the genreList.
    // Should also popup a message box warning the admin of this, making sure they set it through either a window or through other means.
    // The if/else if chain is very horrible to look at, but there wasn't a simple and clean way as far as I could find to iterate through an array/QStringList and check conditions ala switch statements.

    for(int i = 0; i < genreList.length(); i++)
    {
        // Check Genre Match
    }






    return tempBook;
}
